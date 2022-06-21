#include <stdio.h>
//This code simply makes the sum the main diagonal of a matrix.
void main(){
	//Declaring variables
	int tam, soma;
	//Scanning the size of the matrix.
	scanf("%d", &tam);
	/*The matrix uses the tam variable for it's size.
	  Example: If tam has the value of 3, the matrix will be a 3x3 matrix.*/
	int m[tam][tam];
	//Now, the user fills the matrix.
	for(int i = 0; i < tam; i++)
		for(int j = 0; j < tam; j++){
			scanf("%d", &m[i][j]);
		}
	//After that, the code will sum the main diagonal of the matrix.
	for(int i = 0; i < tam; i++)
		for(int j = 0; j < tam; j++){
			if (i == j)
				soma = soma + m[i][j];
		}
	//Next, for the final step, the program will print the results.
	printf("%d", soma);
}