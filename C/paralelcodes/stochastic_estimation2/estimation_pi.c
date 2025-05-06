#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

#define NUM_PONTOS 10000000  // Total de pontos

int main() {
    int i;
    double inicio, fim;
    int num_threads;

    inicio = omp_get_wtime();  // Início da contagem de tempo

    omp_set_num_threads(4);  // Defina o número desejado de threads
    num_threads = omp_get_max_threads();

    int* acertos_por_thread = (int*)calloc(num_threads, sizeof(int));  // Vetor para armazenar acertos por thread

    #pragma omp parallel
    {
        int thread_id = omp_get_thread_num();
        unsigned int seed = time(NULL) ^ thread_id;  // Semente única para cada thread

        #pragma omp for
        for (i = 0; i < NUM_PONTOS; i++) {
            double x = (double)rand() / RAND_MAX;
            double y = (double)rand() / RAND_MAX;

            if (x * x + y * y <= 1.0) {
                acertos_por_thread[thread_id]++;
            }
        }
    }

    // Acumulação em laço serial
    int total_dentro = 0;
    for (i = 0; i < num_threads; i++) {
        total_dentro += acertos_por_thread[i];
    }

    free(acertos_por_thread);  // Libera a memória

    fim = omp_get_wtime();  // Fim da contagem de tempo

    double pi_est = 4.0 * total_dentro / NUM_PONTOS;
    printf("Estimativa de pi: %f\n", pi_est);
    printf("Tempo de execução: %f segundos\n", fim - inicio);

    return 0;
}
