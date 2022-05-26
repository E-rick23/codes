#include <stdio.h>
//This code is simply a test with pointers.
void main(){
    //Declaring variable
    int a;
    //Declaring pointer
    int *p;
    //Giving the variable adress to the pointer
    p = &a;
    //Scanning value of the a variable
    scanf("%d", &a);
    //Printing the results
    printf("The variable value is: %d", a);
    printf("The pointer value is: %p", *p);
    printf("The memory address of the variable is: %p", p);
}