#include <stdio.h>
//This code simply makes the sum the main diagonal of a matrix.
int main(){
	int tam, soma;
	scanf("%d", &tam);
	int m[tam][tam];
	for(int i = 0; i < tam; i++)
		for(int j = 0; j < tam; j++){
			scanf("%d", &m[i][j]);
		}
	for(int i = 0; i < tam; i++)
		for(int j = 0; j < tam; j++){
			if (i == j)
				soma = soma + m[i][j];
		}
	printf("%d", soma);
}