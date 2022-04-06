#include <stdio.h>
#include <math.h>

int main(){

    float eh, eg, em, num, sum, mult, division, counter, arithmetic, harmonic, geometric;
    mult = 1;
    eh = eg = em = num = sum = division = counter = arithmetic = harmonic = geometric = 0;
    while (counter < 10){
        scanf("%f", &num);
        sum = sum + num;
        mult = mult * num;
        division = division + 1/num;
        counter++;
    }
    arithmetic = sum/10;
    geometric = pow(mult,(float) 1/10);
    harmonic = 10/division;
    eh = (harmonic - arithmetic)/arithmetic;
    eg = (geometric - arithmetic)/arithmetic;
    em = (eh + eg)/2;
    em = em*100;

    printf("Média aritmética é %.2f\n", arithmetic);
    printf("Média harmônica é %.2f\n", harmonic);
    printf("Média geométrica é %.2f\n", geometric);
    printf("Erro médio é %.2f %%", em);
    return 0;
}