#include <stdio.h>

int main()
{
    int n, counter1, counter2, rows;

    counter1 = counter2 = 1;
    scanf("%d", &n);
    
    if (n <= 0)
        printf("You typed %d, which isn't a positive number or equals zero", n);
    else
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