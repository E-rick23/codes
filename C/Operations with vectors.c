#include <stdio.h>
//This code waits for the input of three arrays, with three elements each, then, it does the following operation:
//A[0] = [1st element of 1st array + 1st element of 2nd array - 5 times the 1st element of the 3rd array 
//A[1] = [2nd element of 1st array + 2nd element of 2nd array - 5 times the 2nd element of the 3rd array
//A[2] = [3rd element of 1st array + 3rd element of 2nd array - 5 times the 3rd element of the 3rd array  
void main(){
    int a[3], b[3], c[3], d[3];
    //For loop to enter 3 values on the first array.
    for(int i = 0; i<3; i++){
        printf("Enter the [%d]º element of the first array:", i+1);
        scanf("%d", &b[i]);
    }
    //For loop to enter 3 values on the second array.
    for(int i = 0; i<3; i++){
        printf("Enter the [%d]º element of the second array:", i+1);
        scanf("%d", &c[i]);
    }
    //For loop to enter 3 values on the third array.
    for(int i = 0; i<3; i++){
        printf("Enter the [%d]º element of the third array:", i+1);
        scanf("%d", &d[i]);
    }
    //Applying operations.
    a[0] = b[0]+c[0]-(5*d[0]);
    a[1] = b[1]+c[1]-(5*d[1]);
    a[2] = b[2]+c[2]-(5*d[2]);
    //Printing the results.
    printf("The resulting array is:\n");
    printf("A = [%d,%d,%d]", a[0], a[1], a[2]);
}