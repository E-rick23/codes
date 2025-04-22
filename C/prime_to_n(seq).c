#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <valor_maximo>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    int count = 0;

    struct timeval start, end;
    gettimeofday(&start, NULL);

    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            count++;
        }
    }

    gettimeofday(&end, NULL);
    double elapsed = (end.tv_sec - start.tv_sec) * 1000.0;
    elapsed += (end.tv_usec - start.tv_usec) / 1000.0;

    printf("Total de primos entre 2 e %d: %d\n", n, count);
    printf("Tempo de execução: %.3f ms\n", elapsed);

    return 0;
}
