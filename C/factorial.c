#include <stdio.h>
void factorial(int* x) {
    //Declarando variáveis
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
    int n;
    //Entering the number.
    scanf("%d",&n); 
    //Calling the function.
    factorial(&n);
    //Printing the results.
    printf("%d", n);
}