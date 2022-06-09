//This code simply shows the first and last digit of the entered number, and the sum of both.
#include <stdio.h>

int main(){
    //Declaring variables...
    int number, first, last;
    number = first = last = 0;
    //Asking for input.
    scanf("%d", &number);
    //Operation to get the last number.
    last = number % 10;
    //Operation to get the first number.
    while ( number >= 10 ){
        number = number/10;
    }
    first = number;
    //Printing the results...
    printf("The last digit is: %d\n", last);
    printf("The first digit is: %d\n", first);
    //The number variable now adquires the sum of the first and last digits.
    number = first+last;
    printf("The sum of the first and last digits is: %d\n", number);
    return 0;
}