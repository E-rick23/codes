//This program displays the number the user entered in the numerical base the user entered.
#include <stdio.h>

int operation(int num, int div)
{
    //If the number entered is -1, the program ends.
    if (num == -1){
        printf("Program ended!");
    }
    //If the number entered is 0, the program simply prints this statement.
    if (num == 0){
        printf("The number 0 is 0 and doesn't need convertion.");
    }
    //If the value given isn't 0 or -1 and is greater then 0, the program starts calculating. 
    if (num != -1 && num != 0 && num > 0) {
        int vet_bin[50];

	    int i = 0, j;

	    int aux_num = num;
        
        //This while loop makes the mod operation, and fills the array with the results.
	    while(num > 0)
	    {
		    vet_bin[i] = num % div;
		    i++;
		    num = num / div;
	    }
        //After that, the result is printed on the screen.
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
    //This do-while statement makes sure the program keeps going until the value entered is -1.
    do{
        printf("Welcome, this program converts a decimal value into a value in the base between 2 to 7! \n");
        printf("To stop the program, enter -1. \n");
        printf("Enter the number that will be converted: ");
        scanf("%d", &value);
        printf("Enter the base you want to convert the number to: ");
        scanf("%d", &base);
        operation(value, base);
    } while (value != -1);
    return 0;
}