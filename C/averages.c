#include <stdio.h>
#include <math.h>

int main(){

    float num, sum, mult, division, counter, ahritmetic, harmonic, geometric;
    mult = 1;
    while (counter < 10){
        scanf("%f", &num);
        sum = sum + num;
        mult = mult * num;
        division = division + 1/num;
        counter++;
    }
    ahritmetic = sum/10;
    geometric = pow(mult,(float) 1/10);
    harmonic = 10/division;

    printf("Média aritmética é %.2f\n", ahritmetic);
    printf("Média harmônica é %.2f\n", harmonic);
    printf("Média geométrica é %.2f\n", geometric);
    return 0;
}