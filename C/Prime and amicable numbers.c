//This code checks if two numbers are prime, and, if they're an amicable pair. 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//This function tells if the values entered are prime or not.
int primo(int n){
    int m, notprime;
    m = notprime = 0;
    m=n/2;
    for(int i=2;i<=m;i++)
    {
        if(n%i==0)
        {    
            printf("The number %d isn't a prime number \n", n);
            notprime=1;
            break;
        }
    }
    if(notprime==0)
    printf("The number %d is a prime number \n", n);
    return 0;
}

//This function makes the operations to tell if both values are amicable or not.
int amicableOrNot(int n)
{
    int sum = 1;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            sum += i;
            if (n/i != i)
                sum += n/i;
        }
    }
    return sum;
}
//This function returns true, if the values are amicable, and false, if they're not.
bool isAmicable(int a,int b)
{
    return(amicableOrNot(a) == b && amicableOrNot(b) == a);
}
//Main function that gets the values and prints the results.
int main(){    
      
    int x, y, pr, pr2;
    printf("Enter two numbers to check if they're prime and an amicable pair: ");
    scanf("%d %d",&x, &y);
    pr = primo(x);
    pr2 = primo(y);
    if( isAmicable(x,y))
        printf("The numbers <%d,%d> are an amicable pair.\n", x, y);
    else
        printf("The numbers <%d,%d> aren't an amicable pair.\n", x, y);
    return 0;
}    