#include <stdio.h>

int main() {
    //Declaring variables.
    double volume, r;
    //All variables need to be declared as double, due to the possibility of high values.
    //Adquiring input.
    scanf("%lf", &r);
    //Sphere volume formula.
    volume = (4/3.0)*3.14159*(r*r*r);
    //Printing the results.
    printf("Volume = %.3lf \n", volume);
    //End of the code.
    return 0;
}
