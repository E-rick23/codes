#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main() {
    int N = 1000000;
    int dentro_circulo = 0;
    int i;

    srand(time(NULL)); // usado como firstprivate (apesar de ainda não ser seguro com rand)

    #pragma omp parallel private(i) firstprivate(N) shared(dentro_circulo)
    {
        #pragma omp for
        for (i = 0; i < N; i++) {
            double x = (double)rand() / RAND_MAX;
            double y = (double)rand() / RAND_MAX;

            if (x * x + y * y <= 1.0) {
                #pragma omp critical
                {
                    dentro_circulo++;
                }
            }
        }
    }

    double pi = 4.0 * dentro_circulo / N;
    printf("Estimativa de pi: %f\n", pi);

    return 0;
}
