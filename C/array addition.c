#include <stdio.h>
//This code adquires elements for two arrays, then prints an array with the sum of both arrays elements
void main(){
    int size;
    //First scanf gets the array size.
    scanf("%d", &size);
    //If the size is greater than 10, it will say the array is too big.
    if (size > 10){
        printf("Too many elements!");
    }
    //If it's less or equal to ten, it will adquire the elements, and print the array of the sum of the values.
    if (size <= 10){
        int a[size], b[size], sum[size];
        for (int i = 0; i<size; i++){
            scanf("%d", &a[i]);
        }
        for (int i = 0; i<size; i++){
            scanf("%d", &b[i]);
        }
        for (int i = 0; i<size; i++){
            sum[i] = a[i]+b[i];
        }
        for (int i = 0; i<size; i++){
            printf("%d ", sum[i]);
        }
        
    }
}