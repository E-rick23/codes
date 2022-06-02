//This code shows the user the biggest value they entered.
#include <stdio.h>
void main()
{   
    //Declaring variables
    int array[100], *max, tam;
    //Receiving array size
    printf("Type how many numbers you want to enter: ");
    scanf("%d", &tam);
    //Receiving values
    for (int i = 0 ; i < tam ; i++ ){
        printf("Type the %dº value: ", i+1);
        scanf("%d", &array[i]);
    }
     max = array;
    *max = *array;
    //Loop that aquires the biggest value
    for(int i = 1; i < tam; i++){
        if (*(array+i) > *max)
            *max = *(array+i);
    }
    //Printing the result.
    printf("The biggest value is %d.\n", *max);
}