#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main() {
    int N = 1000000;
    int count = 0;

    #pragma omp parallel
    {
        unsigned int seed = omp_get_thread_num(); // seed privada para cada thread

        #pragma omp for
        for (int i = 0; i < N; i++) {
            double x = (double) rand_r(&seed) / RAND_MAX;
            double y = (double) rand_r(&seed) / RAND_MAX;
            if (x * x + y * y <= 1.0) {
                #pragma omp critical
                count++;
            }
        }
    }

    double pi = 4.0 * count / N;
    printf("Valor estimado de pi (corrigido): %f\n", pi);
    return 0;
}
