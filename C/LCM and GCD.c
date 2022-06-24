#include <stdio.h>
//This code calculates the greatest common divisor and least common multiple between two integers using a recursive function.
//gdc is a recursive function that finds the GDC of the number.
int gcd(int x, int y)
{
   //The recursion ends if the (y == 0) condition is met.
   if (y == 0)
      return x;
   else
      return gcd(y, x % y);
   //If the condition isn't met, the function calls itself, continuing the process.
}

void main()
{
   //Declaring variables.
   int n1, n2, maxcd;
   printf("Enter two integers: ");
   //Adquiring the values.
   scanf("%d %d", &n1, &n2);
   //The first call of the gcd function is made.
   maxcd = gcd(n1, n2);
   //After the recursion is over, the results are printed.
   printf("GCD = %d", maxcd);
   printf("\nLCM = %d", (n1 * n2) / maxcd);
}
