#include <stdio.h>
 
// Binary search function that returns the index of the number entered or -1 in case it isn't on the array.
int binarySearch(int array[], int l, int r, int x)
{
    if (r >= l) {
        int middle = l + (r - l) / 2;
        //If the value is on the middle, the function returns the result.
        if (array[middle] == x)
            return middle;
 
        // If value is smaller than the middle value, it will search the left subarray.
        if (array[middle] > x)
            return binarySearch(array, l, middle - 1, x);
 
        // If the value isn't on the middle and is bigger than the middle value, it will search the value on the right subarray
        return binarySearch(array, middle + 1, r, x);
    }
    //If the element isn't present in the array, the function returns -1.
    return -1;
}
 
void main()
{
    int vetor[100];
    int whichnum;
    //Filling an array with values.
    for(int i = 0; i < 100; i++){
        vetor[i] = i;
    }
    int fullsize = sizeof(vetor) / sizeof(vetor[0]);
    printf("Type the number you want to search: ");
    //Waiting for input.
    scanf("%d", &whichnum);
    //Calling the binarySearch function.
    int result = binarySearch(vetor, 0, fullsize - 1, whichnum);
    //If the funtion returns -1, that means the value wasn't found, and if it was found, it will return the index of the value.
    if (result == -1)
        printf("\nThe value you entered isn't on this array...");
    else
        printf("\nThe value you entered was found! Index: %d", result);
}