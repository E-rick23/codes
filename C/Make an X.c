#include <stdio.h>

int main()
{
    int c1, c2, n, counter;
    char character;
    
    scanf("%d %c", &n, &character);
    counter = n-1;

    for(c1 = 1; c1 <= counter; c1++){
        for(c2 = 1; c2 <= counter; c2++){
            if (c2==c1 || (c2==counter - c1 + 1)){
                printf("%c", character);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    };
    return 0;
}