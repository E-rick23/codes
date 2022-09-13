#include <stdio.h>
#include <stdbool.h>
void main(){
    //Declaring variables.
    int vetor[100];
    int whichnum;
    bool foundit = false;
    //Filling an array with values.
    for(int i = 0; i < 100; i++){
        vetor[i] = i;
    }
    printf("Type the number you want to search: ");
    //Waiting for input.
    scanf("%d", &whichnum);
    int fullsize = (sizeof(vetor)/sizeof(vetor[0])); //Array size.
    int middle = fullsize/2; //Half of the array size.
    //In case the value entered is equal to the value in the middle of the array, the value is found, and the program ends!
    if (vetor[middle] == whichnum){
        printf("\nNumber found! Index: %d\n", middle);
        foundit = true;
        /*In case the value entered isn't equal to the value in the middle of the array,
        the program will look at the values that are bigger than the middle value 
        or smaller than the bigger value, depending on the entered number. */
    } else if (vetor[middle] > whichnum){
        for(int i = 0; i < middle; i++){
            if(vetor[i] == whichnum){
                printf("\nNumber found! Index: %d\n", i);
                foundit = true;
            }
        }
    } else {
        for (int i = middle+1; i < fullsize; i++){
            if(vetor[i] == whichnum){
                printf("\nNumber found! Index: %d\n", i);
                foundit = true;
            }
        } 
    };
    //After that, if the program isn't able to find the number, the program says the value isn't on the array, and ends.
    if (foundit == false){
        printf("\nThe value you entered isn't on this array...\n");
    } 
}