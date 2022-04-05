#include <stdio.h>

int main(){
    int number, first, last;
    number = first = last = 0;
    scanf("%d", &number);
    last = number % 10;
    while ( number >= 10 ){
        number = number/10;
    }
    first = number;
    printf("The last digit is: %d\n", last);
    printf("The first digit is: %d\n", first);
    number = first+last;
    printf("The sum of the first and last digits is: %d\n", number);
    return 0;
}