//This code calculates the basic operations between two numbers.
#include <stdio.h>

int main()
{
     //Declaring variables.
     double a, b, addition, subtraction, multiplication, division;
     //Asking for the input of two values.
     printf("Please enter the first number: ");
     scanf("%lf", &a);
     printf("Please enter the second number: ");
     scanf("%lf", &b);
     //Addition operation.
     addition = a+b;
     //Subtraction operation.
     subtraction = a-b;
     //Division operation.
     division = a/b;
     //Multiplication operation.
     multiplication = a*b;
     //Printing the results
     //The values will be rounded up the final value to two digits after the "."
     printf("a+b = %.2lf\n", addition);
     printf("a-b = %.2lf\n", subtraction);
     printf("a/b = %.2lf\n", division);
     printf("a*b = %.2lf\n", multiplication);
    return 0;
}
