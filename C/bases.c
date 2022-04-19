//This program displays the number the user entered in the numerical base the user entered.
#include <stdio.h>


int operation(int num, int div)
{
    if (num == -1){
        printf("Program ended!");
    }
    if (num == 0){
        printf("The number 0 is 0 and doesn't need convertion.");
    }
    if (num != -1 && num != 0) {
        int vet_bin[50];

	    int i = 0, j;

	    int aux_num = num;

	    while(num > 0)
	    {
		    vet_bin[i] = num % div;
		    i++;
		    num = num / div;
	    }

	    printf("Number %d(10) converted to base %d = ", aux_num, div);

	    for(j = i - 1; j >= 0; j--)
		    printf("%d", vet_bin[j]);
	    printf("(%d)", div);
        printf("\n");

	    return 0;
    }

}

	
int main(){

    int value,base,result;
    do{
        printf("Welcome, this program converts a decimal value into a value in the base between 2 to 7! \n");
        printf("Enter the number that will be converted: ");
        scanf("%d", &value);
        printf("Enter the base you want to convert the number to: ");
        scanf("%d", &base);
        operation(value, base);
    } while (value != -1);
    return 0;
}