//This code converts any number between (and including), 0 and 255 to binary.

#include <stdio.h>

int main()
{
   //Declaring variables
   int integer, counter, binary[8];
   //First trial to get a valid value.
   printf("Enter a number between 0 and 255 to convert it to binary: ");
   scanf("%d", &integer);
   
   /*This while loop keeps asking for a 
     valid number (between and including 0 and 255)
     until this requirement is met. */

    while (integer < 0 || integer > 255){
        if (integer < 0 || integer > 255){
        printf("Numbers below 0 and greater than 255 aren't supported. \n");
        printf("Please enter a valid number (between 0 and 255): ");
        scanf("%d", &integer);
        }
    }
    /*After a valid number is entered, this for loop will make the operations to give the user a result.
      It will fill an array slot after successfully having a result from a division.*/
    for (counter = 7; counter >= 0; counter--)
    {   
        //The division operations that convert a integer to binary.
        if (integer % 2 == 0)
            binary[counter] = 0;
        else
            binary[counter] = 1;
            integer = integer / 2;
        }
        //This loop prints the array.
        for (counter = 0; counter < 8; counter++)
            printf("%d", binary[counter]);
        return 0;
}