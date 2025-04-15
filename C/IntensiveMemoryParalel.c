//Should be compiled with openmp (gcc -fopenmp IntensiveMemoryParalel.c -o IntensiveMemoryParalel)

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define SIZE 100000000

int main() {
    double *a = malloc(SIZE * sizeof(double));
    double *b = malloc(SIZE * sizeof(double));
    double *c = malloc(SIZE * sizeof(double));

    if (!a || !b || !c) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    int num_threads;
    #pragma omp parallel
    {
        #pragma omp master
        {
            num_threads = omp_get_num_threads();
            printf("Executando com %d threads (MEMÓRIA)\n", num_threads);
        }
    }

    // Inicialização
    #pragma omp parallel for
    for (long i = 0; i < SIZE; i++) {
        a[i] = 1.0;
        b[i] = 2.0;
    }

    double start = omp_get_wtime();

    // Soma paralela
    #pragma omp parallel for
    for (long i = 0; i < SIZE; i++) {
        c[i] = a[i] + b[i];
    }

    double end = omp_get_wtime();
    printf("Tempo de execução (memória): %.3f segundos\n", end - start);

    free(a); free(b); free(c);
    return 0;
}
