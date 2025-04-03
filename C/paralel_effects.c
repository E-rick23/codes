#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000 // Loop size

int main(){
    int *array = (int*) malloc(SIZE * sizeof(int));
    if (array == NULL) {
        printf("Error while allocating memory\n");
        return 1;
    } //function so things don't explode! :D

    clock_t start, end;
    double time_taken;

    // First array: Simple operation

    start = clock(); //Start the clock
    for (int i = 0; i < SIZE; i++) {
        array[i] += i * 2; 
    }
    end = clock(); //Stop the clock
    time_taken = ((double)(end-start)) / CLOCKS_PER_SEC; //Defines the time taken
    printf("Basic operation (First Array) took %f seconds! \n", time_taken);
    
    // Second Array: cumulative sum of elements
    
    start = clock();
    for (int i = 1; i < SIZE; i++){
        array[i] += array[i -1]; //Generating dependency between iterations
    }
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Cumulative sum of elements (2nd Array) took %f seconds! \n", time_taken);
    
    // Third Array: Independent Accesses to maximize parallelism
    start = clock();
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += array[i]; // Independent access in every iteration
    }
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Independent access (3rd Array) took: %f seconds!\n", time_taken);

    printf("Final result: %d\n", sum);

    free(array);
    return 0;
}
