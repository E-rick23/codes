#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main() {
    int N = 1000000;
    int count = 0;

    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        double x = (double) rand() / RAND_MAX;
        double y = (double) rand() / RAND_MAX;
        if (x * x + y * y <= 1.0) {
            count++;
        }
    }

    double pi = 4.0 * count / N;
    printf("Valor estimado de pi: %f\n", pi);
    return 0;
}
