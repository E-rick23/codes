#include <stdio.h>

//This code concatenates two arrays into one.
int main(){
    //Declaring variables...
    int t1, t2, t3, c = 0;
    //Adquiring array sizes...
    printf("Please enter the size of the first and second arrays: ");
    scanf("%d %d", &t1, &t2);
    //t3 is the sum of the first and second array sizes.
    t3 = t1+t2;
    //Declaring arrays...
    int v1[t1], v2[t2], v3[t3];
    //Adquiring first array values...
    printf("Okay, now enter the values of the first array: ");
    for(int i = 0; i < t1; i++){
        scanf("%d", &v1[i]);
    }
    printf("Good, now enter the values of the second array: ");
    //Adquiring second array values...
    for(int i = 0; i < t2; i++){
        scanf("%d", &v2[i]);
    }
    //Adding first array into the third one.
    for(int i = 0; i < t1; i++){
        v3[c++] = v1[i];
    }
    //Adding second array into the third one.
    for(int i = 0; i < t2; i++){
        v3[c++] = v2[i];
    }
    //Printing the third array
    printf("The resulting array is: ");
    for(int i = 0; i < t3; i++){
        if (i < (t3-1))
            printf("%d, ", v3[i]);
        else
            printf("%d ", v3[i]);
    }
    return 0;
}