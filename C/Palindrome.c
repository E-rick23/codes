//This code tells if a number is a palindrome or not, and, after that if it's even or odd.
#include <stdio.h>

int main(){
    //Declaring variables...
    int x, reverse, restm, copyx;
    x = reverse = restm = 0;
    printf("Type a number to find out if it's a palindrome, and if it's even or odd: ");  
    scanf("%d", &x);    
    copyx = x;
    while(x!=0)    
    {    
     restm=x%10;    
     reverse=reverse*10+restm;    
     x/=10;    
    }    
    if (copyx == reverse){
        printf("%d is a palindrome ", copyx);
        if ((copyx%2) == 0){
            printf("and an even number.");
        }
        else
        {
            printf("and an odd number.");
        };
    }
    else 
    {
        printf("%d isn't a palindrome.", copyx);
        if ((copyx%2) == 0){
            printf("and is an even number.");
        }
        else
        {
            printf("and is an odd number.");
        };
    };
    return 0;
};