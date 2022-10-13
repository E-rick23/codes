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

void insertionSort(int vector[], int size){
    int aux, j;
    //Limiting the boundary of the array after each loop.
    for(int i = 1; i < size-1; i++){
        aux = vector[i];
        j = i-1;
        /* Move elements of vetor[0..i-1], that are
          greater than aux, to one position ahead
          of their current position */
        while(j >= 0 && vector[j] > aux){
            vector[j+1] = vector[j];
            j = j-1;
        }
        vector[j+1] = aux;
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
    insertionSort(vetor, fullsize); //Sorting the array.
    printf("]\n Organized array: \n[ ");
    arrayprinter(vetor, fullsize); //Printing the sorted array.
    printf("]");
}