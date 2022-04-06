#include <stdio.h>

int main(){

    float num, sum, mult, div, counter, ahritmetic, harmonic, geometric;
    while (counter < 10){
        scanf("%f", num);
        sum = sum + num;
        mult = mult * num;
        div = div + 1/num;
        counter++;
    }
    ahritmetic = sum/10;
    geometric = pow(mult,(float) 1/10);
    harmonic = 10/div;
    return 0;
}