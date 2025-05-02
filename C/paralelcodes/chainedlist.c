#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <omp.h>

typedef struct Node {
    char nome_arquivo[100];
    struct Node* proximo;
} Node;

// Função para criar um novo nó
Node* criar_no(const char* nome_arquivo) {
    Node* novo = (Node*)malloc(sizeof(Node));
    strcpy(novo->nome_arquivo, nome_arquivo);
    novo->proximo = NULL;
    return novo;
}

// Função para adicionar nó ao final da lista
void adicionar_no(Node** head, const char* nome_arquivo) {
    Node* novo = criar_no(nome_arquivo);
    if (*head == NULL) {
        *head = novo;
    } else {
        Node* temp = *head;
        while (temp->proximo != NULL)
            temp = temp->proximo;
        temp->proximo = novo;
    }
}

int main() {
    Node* lista = NULL;

    // Adiciona alguns arquivos fictícios
    adicionar_no(&lista, "arquivo1.txt");
    adicionar_no(&lista, "arquivo2.txt");
    adicionar_no(&lista, "arquivo3.txt");
    adicionar_no(&lista, "arquivo4.txt");

    Node* atual = lista;

    // Região paralela com tarefas
    #pragma omp parallel
    {
        #pragma omp single
        {
            while (atual != NULL) {
                Node* no_atual = atual;
                #pragma omp task firstprivate(no_atual)
                {
                    printf("Arquivo: %s | Thread: %d\n", no_atual->nome_arquivo, omp_get_thread_num());
                }
                atual = atual->proximo;
            }
        }
    }

    // Liberar memória
    while (lista != NULL) {
        Node* temp = lista;
        lista = lista->proximo;
        free(temp);
    }

    return 0;
}
