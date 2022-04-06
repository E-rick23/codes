//This program prints the amount of lines the user wants of Floyd's triangle on the screen.
#include <stdio.h>

int main()
{   //Declaring variables.
    int n, counter1, counter2, rows;

    counter1 = counter2 = 1;
    printf("Type the amount of lines of the Floyd's Triangle you want to see: ");
    scanf("%d", &n);
    //After getting the input, the program first, checks if the value is valid (>0).
    if (n <= 0)
        printf("You typed %d, which isn't a positive number or equals zero", n);
    else
        //This while loop prints the triangle on the screen.
        while (counter2 <= n)
        {
            rows = 1;
            while (rows <= counter2)
            {
                printf(" %2d", counter1);
                counter1++;
                rows++;
            }
            counter2++;
            printf(" \n");
        }
    return 0;
};