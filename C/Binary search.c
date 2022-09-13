#include <stdio.h>
#include <stdbool.h>
void main(){
    int vetor[100];
    int whichnum;
    bool foundit = false;
    for(int i = 0; i < 100; i++){
        vetor[i] = i;
    }
    printf("Type the number you want to search: ");
    scanf("%d", &whichnum);
    int middle = (sizeof(vetor)/sizeof(vetor[0]))/2; //Finds out the size of the array and cuts it in half.
    int fullsize = (sizeof(vetor)/sizeof(vetor[0]));
    if (vetor[middle] == whichnum){
        printf("\nNumber found! Index: %d\n", middle);
        foundit = true;
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
    if (foundit == false){
        printf("\nThe value you entered isn't on this array...\n");
    } 
}