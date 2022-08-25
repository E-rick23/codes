#include <stdio.h>

void addition(){
    int n1, n2, n3;
    printf("\nEnter two values to sum up: "); 
    scanf("%d %d", &n1, &n2);
    n3 = n1+n2;
    printf("The sum %d + %d results in: %d", n1, n2, n3);
}
void subtraction(){
    int n1, n2, n3;
    printf("\nEnter two values to subtract: "); 
    scanf("%d %d", &n1, &n2);
    n3 = n1-n2;
    printf("The subtraction %d - %d results in: %d", n1, n2, n3);
}
void multiplication(){
    int n1, n2, n3;
    printf("\nEnter two values to multiply: "); 
    scanf("%d %d", &n1, &n2);
    n3 = n1*n2;
    printf("The multiplication %d * %d results in: %d", n1, n2, n3);
}
void division(){
    int n1, n2, n3;
    printf("\nEnter the numerator and denominator: "); 
    scanf("%d %d", &n1, &n2);
    n3 = n1/n2;
    printf("The division %d / %d results in: %d", n1, n2, n3);
}
void main(){
    printf("1 = Addition, 2 = Subtraction, 3 = Multiplication, 4 = Division.\n");
    printf("Choose the operation: ");
    int operation;
    scanf("%d", &operation);
    switch (operation){
        case (1):
            addition();
        break;
        case (2):
            subtraction();
        break;
        case (3):
            multiplication();
        break;
        case (4):
            division();
        break;
        default:
            printf("Invalid Operation!");
    }

}