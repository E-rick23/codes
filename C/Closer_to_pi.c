#include <stdio.h>
#include <math.h>
#include <time.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

double calcular_pi(int iteracoes) {
    double soma = 0.0;
    for (int k = 0; k < iteracoes; k++) {
        soma += (k % 2 == 0 ? 1.0 : -1.0) / (2 * k + 1);
    }
    return soma * 4;
}

int main() {
    int iteracoes;
    printf("Digite o número de iterações: ");
    scanf("%d", &iteracoes);

    clock_t inicio = clock();
    double pi_aproximado = calcular_pi(iteracoes);
    clock_t fim = clock();

    double tempo_execucao = (double)(fim - inicio) / CLOCKS_PER_SEC;
    double erro = fabs(pi_aproximado - M_PI);

    printf("Aproximação de PI: %.15f\n", pi_aproximado);
    printf("Valor real de PI: %.15f\n", M_PI);
    printf("Erro absoluto: %.15f\n", erro);
    printf("Tempo de execução: %.6f segundos\n", tempo_execucao);

    return 0;
}
