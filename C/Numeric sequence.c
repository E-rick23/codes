#include <stdio.h>
/* This code generates a sequence using the following rules:
  - If the variable "n" is even, it's divided by 2
  - If the variable "n" is odd, it's multiplied by three, and adds 1.
  - It keeps going while "n" is different than 1, when "n" is 1, the sequence ends.
  The value of "n" is entered by the user.
*/
int sequencing(int n){
        //If the variable "n" is even, it's divided by 2.
        if(n%2 == 0){
            printf("%d ", n);
            n = n/2;
        }
        //If the variable "n" is odd, it's multiplied by three, and adds 1.
        if((n%2) != 0){
            printf("%d ", n);
            n = (n*3)+1;
        }
        //Stopping condition.
        if(n == 2){
            printf("%d ", n);
            n = 1;
            printf("%d ", n);
        }
        //If n is different than 1 the recursion keeps going.
        if(n != 1)
            sequencing(n);
    return 0;
}
void main(){
    int n;
    scanf("%d", &n);
    //In case "n" is 1 or 2, the program simply prints the following results.  
    if(n == 1){
        printf("1");
    }
    if(n == 2){
        printf("2 1");
    }
    //If "n" is a value different than 1 or 2, the "sequencing" function starts.
    if(n > 2){
        sequencing(n);
    }
}