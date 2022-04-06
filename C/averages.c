#include <stdio.h>

int main(){

    float num, sum, mult, counter, ahritmetic, harmonic, geometrico;
    while (counter < 10){
        scanf("%f", num);
        sum = sum + num;
        mult = mult* num;
        counter++;
    }
    ahritmetic = sum/10;

    return 0;
}