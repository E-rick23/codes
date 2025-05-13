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
    const int N = 100;  // Número de inserções
    Node* list1 = NULL;
    Node* list2 = NULL;

    // Sementes de geração aleatória separadas por thread
    unsigned int seeds[8];

    #pragma omp parallel
    {
        int thread_id = omp_get_thread_num();
        seeds[thread_id] = time(NULL) + thread_id;

        #pragma omp single
        {
            // neste ponto, apenas uma thread entra e cria as tarefas
            for (int i = 0; i < N; i++) {

                // aqui a tarefa é criada (não executada ainda)
                #pragma omp task firstprivate(i)
                {
                    // aqui, esta parte é executada por qualquer thread disponível
                    int tid = omp_get_thread_num();  // Thread que executa a tarefa
                    int random_value = rand_r(&seeds[tid]) % 1000;
                    int list_choice = rand_r(&seeds[tid]) % 2; //Quando uma thread insere um valor na lista, ela escolhe qual usar.

                    if (list_choice == 0) {
                        // Inserção protegida na lista 1 (apenas uma thread acessa por vez e outras threads devem esperar)
                        #pragma omp critical(list1_critical)
                        {
                            insert(&list1, random_value); //Insere na lista 1
                        }
                    } else {
                        // Inserção protegida na lista 2 (apenas uma thread acessa por vez e outras threads devem esperar)
                        #pragma omp critical(list2_critical)
                        {
                            insert(&list2, random_value); //Insere na lista 2
                        }
                    }

                    // Para debug:
                     //printf("Thread %d executou a tarefa %d\n", tid, i);
                }
            }
        }
    }

    // Impressão final das listas
    print_list(list1, "Lista 1");
    print_list(list2, "Lista 2");

    return 0;
}
