#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

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

// Função para imprimir a lista
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
    LinkedList list1 = {NULL};
    LinkedList list2 = {NULL};

    // Inicialização paralela
    #pragma omp parallel
    {
        #pragma omp single
        {
            for (int i = 0; i < N; i++) {
                #pragma omp task firstprivate(i)
                {
                    int value = rand() % 1000;  // Valor aleatório
                    int list_choice = rand() % 2; // Escolha aleatória da lista

                    if (list_choice == 0) {
                        #pragma omp critical(list1)
                        insert(&list1, value);
                    } else {
                        #pragma omp critical(list2)
                        insert(&list2, value);
                    }
                }
            }
        }
    }

    print_list("Lista 1", &list1);
    print_list("Lista 2", &list2);

    return 0;
}
