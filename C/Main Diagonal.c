#include <stdio.h>
//This code simply makes the sum the main diagonal of a matrix.
void main(){
	//Declaring variables
	int size, total;
	//Scanning the size of the matrix.
	printf("Hello, this program receives the size of a matrix, it's values, and prints the sum of it's main diagonal.\n\n");
	printf("On the following step, you'll determine the matrix size.\n\n");
	printf("Ex: If the size is '3', the matrix will be a 3x3 matrix.\n\n");
	printf("Enter the size of the matrix: ");
	scanf("%d", &size);
	/*The matrix uses the "size" variable for it's size.
	  Example: If "size" has the value of 3, the matrix will be a 3x3 matrix.*/
	int m[size][size];
	//Now, the user fills the matrix.
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size; j++){
		    printf("Enter the %dº value of the %dº line: ", j+1, i+1);
			scanf("%d", &m[i][j]);
		}
	//After that, the code will print the main diagonal of the matrix and place it's sum on the "total" variable.
	printf("The main diagonal values are: ");
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size; j++){
			if (i == j){
				printf("%d ", m[i][j]);
				total = total + m[i][j];
			}
				
		}
	//Next, for the final step, the program will print the results.
	printf("The sum of the principal diagonal is: %d", total);
}