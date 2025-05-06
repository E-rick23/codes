#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

#define NUM_PONTOS 10000000  // Total de pontos

int main() {
    int i;
    int total_dentro = 0;  // Variável global para acumular os acertos

    double inicio = omp_get_wtime();  // Início da contagem de tempo

    omp_set_num_threads(4);  // Define número de threads (ajuste conforme desejado)

    #pragma omp parallel
    {
        int dentro_local = 0;
        unsigned int seed = time(NULL) ^ omp_get_thread_num();  // Semente única

        #pragma omp for
        for (i = 0; i < NUM_PONTOS; i++) {
            double x = (double)rand_r(&seed) / RAND_MAX;
            double y = (double)rand_r(&seed) / RAND_MAX;

            if (x * x + y * y <= 1.0) {
                dentro_local++;
            }
        }

        #pragma omp critical
        {
            total_dentro += dentro_local;
        }
    }

    double fim = omp_get_wtime();  // Fim da contagem de tempo

    double pi_est = 4.0 * total_dentro / NUM_PONTOS;
    printf("Estimativa de pi: %f\n", pi_est);
    printf("Tempo de execução: %f segundos\n", fim - inicio);

    return 0;
}
