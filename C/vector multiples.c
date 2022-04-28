#include <stdio.h>


int main(){
    //Declaring array...
    int multiplier, size, counter;
    multiplier = size = 0;
    printf("To start off, enter the amount of values you'll work with: ");
    scanf("%d", &size);
    int integers[size], integersMultiples[size];
    printf("Next, enter the number you want to check multiples: ");
    scanf("%d", &multiplier);
    printf("Good, now type the values you want to check if it's a multiple of %d: ", multiplier);

    //Scanning the amount of values entered in the size variable...
    
    for (int i=0; i<size; i++){
        scanf("%d", &integers[i]);
    }

    counter = 0;
    for (int i=0; i<size; i++){
        if (integers[i] % multiplier == 0){
            integersMultiples[counter] = integers[i];
            counter++;
        }
    }

    printf("Multiples of %d: ", multiplier);

    for (int i=0; i<counter; i++){
        if (i != 0) printf( ", " );
        printf("%d", integersMultiples[i]);
    }
    printf("\n");
    //Printing 20 values...
    printf("The values you entered were: ");
    
    for (int i=0; i<size; i++){
        if (i != 0) printf( ", " );
        printf("%d", integers[i]);
    }
    return 0;
}