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
    printf("O ultimo número é: %d\n", last);
    printf("O primeiro número é: %d\n", first);
    number = first+last;
    printf("A soma é: %d\n", number);
    return 0;
}