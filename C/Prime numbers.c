#include <stdio.h>

int primo(int n){
    int m, notprime;
    m = notprime = 0;
    m=n/2;
    for(int i=2;i<=m;i++)
    {
        if(n%i==0)
        {    
            printf("The number %d isn't a prime number", n);
            notprime=1;
            break;
        }
    }
    if(notprime==0)
    printf("The number %d is a prime number", n);
    return 0;
}
int main(){    
    int x, pr;
    printf("Enter the number to check if it's a prime: ");
    scanf("%d",&x);
    pr = primo(x);
    return 0;
}    