#include <stdio.h>
//This code calculates the factorial of a number entered by the user
void factorial(int* x) {
    //Declaring variables.
    int aux, result = 1;
    if (*x > 1) {
        //The aux value is x-1 to calculate the factorial
        aux = *x - 1;
        //Calling the function again (Using recursion)
        factorial(&aux);
        //When the operations are finished, the code will then, place the final value in the result variable.
        result = (*x) * aux;
    }
    //After the process is complete, the pointer x will receive the result.
    *x = result;
}
void main(){
    //Declaring variables
    int n, b;
    //Entering the number.
    printf("Enter the number to get it's factorial: ");
    scanf("%d",&n);
    b = n;  //Saving n initial value;
    //Calling the function.
    factorial(&n);
    //Printing the results.
    printf("The factorial of %d is: %d", b, n);
}