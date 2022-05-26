#include <stdio.h>

void main(){
    int a;
    int *p;
    p = &a;
    scanf("%d", &a);

    printf("The variable value is: %d", a);
    pritnf("The pointer value is: %p", *p);
    printf("The memory address of the variable is: %p", p);
}