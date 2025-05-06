#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main() {
    int N = 1000000; // número de pontos
    int dentro_circulo = 0;

    srand(time(NULL)); // semente aleatória

    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;

        if (x*x + y*y <= 1.0) {
            dentro_circulo++;
        }
    }

    double pi = 4.0 * dentro_circulo / N;
    printf("Estimativa de pi: %f\n", pi);

    return 0;
}
