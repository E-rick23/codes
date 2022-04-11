//This code tells if a number is a palindrome or not, and, after that if it's even or odd.
#include <stdio.h>

//Declaring a function that tells if a number is even or odd;
int evenOrOdd(int n1, int tf){
        if ((n1%2) == 0 && tf == 1){
            printf("and an even number.");
        }
        else if (!(n1%2) == 0 && tf == 1)
        {
            printf("and an odd number.");
        }
        else if ((n1%2) == 0 && tf == 0){
            printf("and is an even number.");
        }
        else if (!(n1%2) == 0 && tf == 0)
        {
            printf("and is an odd number.");
        };
}

int main(){
    //Declaring variables...
    int x, reverse, restm, copyx, p;
    x = reverse = restm = p = 0;
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
      The program will also tell the user if the value is odd or even by calling the evenOrOdd function,
      not caring if the value is a palindrome or not.
    */
    if (copyx == reverse){
        p = 1;
        printf("%d is a palindrome ", copyx);
        //Calling the evenOrOdd funcion.
        evenOrOdd(copyx, p);
    }
    else 
    {
        p = 0;
        printf("%d isn't a palindrome, ", copyx);
        evenOrOdd(copyx, p);
    };
    return 0;
};
