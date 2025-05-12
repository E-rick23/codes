#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

#define N 1000  // Total de inserções

typedef struct Node {
    int value;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
} LinkedList;

// Função para inserir na cabeça da lista
void insert(LinkedList* list, int value) {
    Node* new_node = malloc(sizeof(Node));
    new_node->value = value;
    new_node->next = list->head;
    list->head = new_node;
}

// Função para imprimir uma lista
void print_list(const char* name, LinkedList* list) {
    printf("%s: ", name);
    Node* current = list->head;
    while (current) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int num_lists;

    printf("Digite o número de listas: ");
    scanf("%d", &num_lists);

    if (num_lists <= 0) {
        fprintf(stderr, "Número de listas deve ser maior que zero.\n");
        return 1;
    }

    // Aloca listas e locks
    LinkedList* lists = calloc(num_lists, sizeof(LinkedList));
    omp_lock_t* locks = malloc(num_lists * sizeof(omp_lock_t));

    for (int i = 0; i < num_lists; i++) {
        omp_init_lock(&locks[i]);
    }

    unsigned int global_seed = (unsigned int)time(NULL);
    unsigned int* seeds;

    // Uma semente por thread
    int max_threads = omp_get_max_threads();
    seeds = malloc(max_threads * sizeof(unsigned int));
    for (int i = 0; i < max_threads; i++) {
        seeds[i] = global_seed ^ (i * 7919); // 7919 = primo grande para melhor dispersão
    }

    #pragma omp parallel
    {
        int tid = omp_get_thread_num();

        #pragma omp single
        {
            for (int i = 0; i < N; i++) {
                #pragma omp task firstprivate(i, tid)
                {
                    int value = rand_r(&seeds[tid]) % 1000;
                    int list_choice = rand_r(&seeds[tid]) % num_lists;

                    omp_set_lock(&locks[list_choice]);
                    insert(&lists[list_choice], value);
                    omp_unset_lock(&locks[list_choice]);
                }
            }
        }
    }

    // Imprime listas
    for (int i = 0; i < num_lists; i++) {
        char name[32];
        snprintf(name, sizeof(name), "Lista %d", (i+1));
        print_list(name, &lists[i]);
    }

    // Liberação de memória e locks
    for (int i = 0; i < num_lists; i++) {
        omp_destroy_lock(&locks[i]);
        Node* current = lists[i].head;
        while (current) {
            Node* tmp = current;
            current = current->next;
            free(tmp);
        }
    }

    free(lists);
    free(locks);
    free(seeds);

    return 0;
}
