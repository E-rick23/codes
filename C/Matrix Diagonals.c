#include <stdio.h>
//This code simply makes the sum the main diagonal of a matrix.
void main(){
	//Declaring variables.
	int size, principal, secondary;
	principal = size = secondary = 0;
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
	//The code now prints the matrix the user entered.
	printf("\nThis is the matrix you entered: \n");
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size; j++){
		    printf("%d ", m[i][j]);
			if(j == (size-1))
				printf("\n");
		}
	//After that, the code will print the main diagonal of the matrix and place it's sum on the "principal" variable.
	printf("\nThe values in the principal diagonal are: ");
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size; j++){
			if (i == j){
				printf("%d ", m[i][j]);
				principal = principal + m[i][j];
			}
		};
	//Next, the program will print the secondary diagonal of the matrix and place it's sum on the "secondary" variable.
	printf("\nThe values in the secondary diagonal are: ");
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size; j++){
			if ((i + j) == (size - 1)){
				printf("%d ", m[i][j]);
				secondary = secondary + m[i][j];
			}
				
		}
	//Then, for the final step, the program will print the results.
	printf("\nThe sum of the principal diagonal is: %d", principal);
	printf("\nThe sum of the secondary diagonal is: %d", secondary);
}