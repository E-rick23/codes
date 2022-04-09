//This code gives the arithmetic, geometric, and harmonic averages.
#include <stdio.h>
#include <math.h>

int main(){
    //Declaring variables (there are a lot of them here...).
    float eh, eg, em, num, sum, mult, division, counter, arithmetic, harmonic, geometric;
    /*Setting the multiplication variable to one,
      because if it multiplies by zero, the result will always be zero,
      therefore, we'll have problems. */   
    mult = 1;
    //Setting all other variables to zero.
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