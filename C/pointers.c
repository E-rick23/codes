#include <stdio.h>
//This code is simply a test with pointers.
void main(){
    //Declaring variable
    int a;
    //Declaring pointer
    int *p;
    //Giving the variable address to the pointer
    p = &a;
    //Scanning value of the a variable
    scanf("%d", &a);
    //Printing the results
    printf("The variable value is: %d\n", a);
    printf("The pointer value is: %d\n", *p);
    printf("The memory address of the variable is: %p\n", p);
}