#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

// Estrutura de um nó da lista
typedef struct Node {
    int value;
    struct Node* next;
} Node;

// Função para inserir no início da lista
void insert(Node** head, int value) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->value = value;
    new_node->next = *head;
    *head = new_node;
}

// Função para imprimir a lista
void print_list(Node* head, const char* name) {
    printf("%s: ", name);
    Node* current = head;
    while (current) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    int N = 100;       // Número de inserções
    int num_lists;     // Número de listas definido pelo usuário

    printf("Digite o número de listas: ");
    scanf("%d", &num_lists);

    // Alocar vetor de listas
    Node** lists = (Node**) calloc(num_lists, sizeof(Node*));

    // Inicializar locks
    omp_lock_t* locks = (omp_lock_t*) malloc(num_lists * sizeof(omp_lock_t)); //Faz com que cada lista tenha seu lock exclusivo.
    //Preparando locks para uso das threads
    for (int i = 0; i < num_lists; i++) {
        omp_init_lock(&locks[i]);
    }

    // Sementes para números aleatórios por thread
    unsigned int seeds[64];  // Assumindo no máximo 64 threads

    #pragma omp parallel
    {
        int tid = omp_get_thread_num();
        seeds[tid] = time(NULL) + tid;

        #pragma omp single
        {
            // neste ponto, apenas uma thread entra e cria as tarefas
            for (int i = 0; i < N; i++) {
                // aqui a tarefa é criada (não executada ainda)
                #pragma omp task firstprivate(i)
                {
                    // aqui, esta parte é executada por qualquer thread disponível
                    int thread_id = omp_get_thread_num(); // Thread que executa a tarefa
                    int value = rand_r(&seeds[thread_id]) % 1000;
                    int list_index = rand_r(&seeds[thread_id]) % num_lists; //Quando uma thread insere um valor na lista, ela escolhe qual usar.

                    // Proteção com lock específico da lista
                    omp_set_lock(&locks[list_index]); // Aguarda até o lock estar livre
                    insert(&lists[list_index], value); // Executa a operação crítica (inserção)
                    omp_unset_lock(&locks[list_index]); // Libera o lock para outra thread
                }
            }
        }
    }

    // Impressão das listas
    for (int i = 0; i < num_lists; i++) {
        char name[32];
        sprintf(name, "Lista %d", i + 1);
        print_list(lists[i], name);
    }

    // Liberação dos locks e memória
    for (int i = 0; i < num_lists; i++) {
        omp_destroy_lock(&locks[i]);
    }

    free(locks);
    free(lists);

    return 0;
}
