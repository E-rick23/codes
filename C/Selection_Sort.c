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
void swapper(int *xpointer, int *ypointer){
    int aux = *xpointer; //Variable that saves the first value
    *xpointer = *ypointer; //Setting the first value as the second one.
    *ypointer = aux; //Setting the second value as the first one, previously set on the aux variable.
}

void selectionSort(int vector[], int size){
    int minelement;
    //Limiting the boundary of the array after each loop.
    for(int i = 0; i < size-1; i++){
        //Finding the minimum element in the unsorted array
        minelement = i;
        for(int j = i+1; j < size; j++){
            if(vector[j] < vector[minelement])
            minelement = j;
        }
        //Swapping the minimumelement with the first one.
        if(minelement != i)
            swapper(&vector[minelement], &vector[i]);
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
    printf("Generated array: \n [ ");
    arrayprinter(vetor, fullsize); //Printing the generated array.
    selectionSort(vetor, fullsize); //Sorting the array.
    printf("]\n Organized array: \n[ ");
    arrayprinter(vetor, fullsize); //Printing the sorted array.
    printf("]");
}