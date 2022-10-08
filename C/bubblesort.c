#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

//Function that prints an array.
void arrayprinter(int vector[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", vector[i]);
    }
}
//Function that swaps two values.
void swapper(int *xpointer, int *ypointer){
    int aux = *xpointer;
    *xpointer = *ypointer;
    *ypointer = aux;
}
//BubbleSort funtion.
void bubblesort(int vector[], int size){
    bool swapped;
    for (int i = 0; i < size-1; i++){
        swapped = false;
        for (int j = 0; j < size-i-1; j++){
            if (vector[j] > vector[j+1]){
                swapper(&vector[j], &vector[j+1]);
                swapped = true;
            }
        }
        //If no elements were swapped on the inner loop, the sorting ends.
        if(swapped == false)
            break;
    }
}
void main(){
    int vetor[20];
    time_t t1; //Declaring time variable
    //Defining the random number generator
    srand( (unsigned) time (&t1)); //srand() parameter
    int fullsize = sizeof(vetor) / sizeof(vetor[0]); //Finding the array size.
    //Filling an array with values.
    for(int i = 0; i < fullsize; i++){
        vetor[i] = rand() % 999; //Generating random values from 0 to 999.
    }
    printf("Generated array: \n");
    arrayprinter(vetor, fullsize); //Printing the generated array.
    bubblesort(vetor, fullsize);
    printf("\n Organized array: \n");
    arrayprinter(vetor, fullsize);
}