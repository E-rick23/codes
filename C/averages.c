//This code gives the arithmetic, geometric, and harmonic averages.
#include <stdio.h>
#include <math.h>

int main(){
    //Declaring variables (there are a lot of them here...).
    float num, sum, mult, division, counter, arithmetic, harmonic, geometric;
    /*Setting the multiplication variable to one,
      because if it multiplies by zero, the result will always be zero,
      therefore, we'll have problems. */   
    mult = 1;
    //Setting all other variables to zero.
    num = sum = division = counter = arithmetic = harmonic = geometric = 0;
    printf("Please enter 10 values: ");
    //This while loop requests 10 values, and adds them to the variables sum, mult and division.
    while (counter < 10){
        scanf("%f", &num);
        sum = sum + num;
        mult = mult * num;
        division = division + 1/num;
        counter++;
    }
    //After finishing the loop, the averages are calculated using these variables:
    arithmetic = sum/10;
    geometric = pow(mult,(float) 1/10);
    harmonic = 10/division;
    //After everything is calculated, the code prints the results.
    printf("The arithmetic average is: %.2f\n", arithmetic);
    printf("The harmonic average is: %.2f\n", harmonic);
    printf("The geometric average is: %.2f\n", geometric);
    return 0;
}