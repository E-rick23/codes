#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

int main() {
    int N = 1000000;
    int count = 0;

    #pragma omp parallel shared(count)
    {
        unsigned int seed = time(NULL) + omp_get_thread_num() * 1234;

        int local_count = 0;

        #pragma omp for
        for (int i = 0; i < N; i++) {
            double x = (double) rand_r(&seed) / RAND_MAX;
            double y = (double) rand_r(&seed) / RAND_MAX;

            if (x * x + y * y <= 1.0) {
                local_count++;
            }
        }

        #pragma omp atomic
        count += local_count;
    }

    double pi = 4.0 * count / N;
    printf("Valor estimado de pi: %f\n", pi);
    return 0;
}
