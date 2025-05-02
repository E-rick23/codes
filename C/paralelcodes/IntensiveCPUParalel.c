//Should be compiled with openmp (gcc -fopenmp IntensiveMemoryParalel.c -o IntensiveMemoryParalel)

#include <stdio.h>
#include <math.h>
#include <omp.h>

#define N 1000000000

int main() {
    double result = 0.0;

    int num_threads;
    #pragma omp parallel
    {
        #pragma omp master
        {
            num_threads = omp_get_num_threads();
            printf("Executando com %d threads (CPU)\n", num_threads);
        }
    }

    double start = omp_get_wtime();

    #pragma omp parallel for reduction(+:result)
    for (long i = 1; i < N; i++) {
        result += sin(i) * cos(i) / (i + 1);
    }

    double end = omp_get_wtime();
    printf("Resultado final: %f\n", result);
    printf("Tempo de execução (CPU): %.3f segundos\n", end - start);

    return 0;
}
