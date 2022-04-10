//This code tells if a number is a palindrome or not, and, after that if it's even or odd.
#include <stdio.h>

int main(){
    //Declaring variables...
    int x, reverse, restm, copyx;
    x = reverse = restm = 0;
    printf("Type a number to find out if it's a palindrome, and if it's even or odd: ");  
    scanf("%d", &x);    
    //After getting the input, the copyx variable gets the same value as the input (x).
    copyx = x;
    //After that, this while loop reverses the value in x.
    while(x!=0)    
    {    
     restm=x%10;    
     reverse=reverse*10+restm;    
     x/=10;    
    }    
    /*
      After that it compares to check if both numbers are equal to each other. 
      If so, the program will tell the user the value is a palindrome, else, it will tell the opposite.
      The program will also tell the user if the value is odd or even, not caring if the value is a palindrome or not.
    */
    if (copyx == reverse){
        printf("%d is a palindrome ", copyx);
        //If statement to check if the number is odd or even*
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
        //*Same thing.
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