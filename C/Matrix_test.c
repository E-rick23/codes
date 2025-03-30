#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para medir tempo
double get_time(clock_t start, clock_t end) {
    return (double)(end - start) / CLOCKS_PER_SEC;
}

// Multiplicação matriz por vetor (acesso por linhas)
void mat_vec_row_major(double *matrix, double *vector, double *result, int n) {
    for (int i = 0; i < n; i++) {
        result[i] = 0.0;
        for (int j = 0; j < n; j++) {
            result[i] += matrix[i * n + j] * vector[j];
        }
    }
}

// Multiplicação matriz por vetor (acesso por colunas)
void mat_vec_col_major(double *matrix, double *vector, double *result, int n) {
    for (int i = 0; i < n; i++) {
        result[i] = 0.0;
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            result[i] += matrix[i * n + j] * vector[j];
        }
    }
}

int main() {
    int sizes[] = {128, 256, 512, 1024, 2048, 4096}; // Diferentes tamanhos de matriz

    for (int s = 0; s < 6; s++) {
        int n = sizes[s];
        double *matrix = (double *)malloc(n * n * sizeof(double));
        double *vector = (double *)malloc(n * sizeof(double));
        double *result = (double *)malloc(n * sizeof(double));

        // Inicialização da matriz e do vetor
        for (int i = 0; i < n; i++) {
            vector[i] = 1.0;
            for (int j = 0; j < n; j++) {
                matrix[i * n + j] = (double)(i + j);
            }
        }

        // Mede tempo da versão linha externa
        clock_t start = clock();
        mat_vec_row_major(matrix, vector, result, n);
        clock_t end = clock();
        double time_row = get_time(start, end);

        // Mede tempo da versão coluna externa
        start = clock();
        mat_vec_col_major(matrix, vector, result, n);
        end = clock();
        double time_col = get_time(start, end);

        printf("Tamanho: %d x %d - Tempo linha externa: %f s - Tempo coluna externa: %f s\n", n, n, time_row, time_col);

        free(matrix);
        free(vector);
        free(result);
    }
    return 0;
}
