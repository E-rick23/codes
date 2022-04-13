#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int primo(int n){
    int m, notprime;
    m = notprime = 0;
    m=n/2;
    for(int i=2;i<=m;i++)
    {
        if(n%i==0)
        {    
            printf("The number %d isn't a prime number ", n);
            notprime=1;
            break;
        }
    }
    if(notprime==0)
    printf("The number %d is a prime number ", n);
    return 0;
}

int ProDivSum(int n)
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
bool chkAmicable(int a,int b)
{
    return(ProDivSum(a) == b && ProDivSum(b) == a);
}

int main(){    
      
    int x, y, pr, pr2;
    printf("Enter the number to check if it's a prime: ");
    scanf("%d %d",&x, &y);
    pr = primo(x);
    pr2 = primo(y);
    if( chkAmicable(x,y))
        printf("The numbers <%d,%d> are an amicable pair.\n", x, y);
    else
        printf("The numbers <%d,%d> aren't an amicable pair.\n", x, y);
    return 0;
}    