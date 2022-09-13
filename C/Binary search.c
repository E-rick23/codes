#include <stdio.h>
void main(){
    int vetor[100];
    int whichnum;
    for(int i = 0; i < 100; i++){
        vetor[i] = i;
    }
    /*for(int i = 0; i < 100; i++){
        printf("%d ", vetor[i]);
    }*/
    printf("Type the number you want to search: ");
    scanf("%d", &whichnum);
    int middle = (sizeof(vetor)/sizeof(vetor[0]))/2; //Finds out the size of the array and cuts it in half.
    int fullsize = (sizeof(vetor)/sizeof(vetor[0]));
    //printf("%d", middle);
    if (vetor[middle] == whichnum){
        printf("Valor encontrado! Indice: %d", middle);
    } else if (vetor[middle] > whichnum){
        for(int i = 0; i < middle; i++){
            if(vetor[i] == whichnum){
                printf("Valor encontrado! Indice: %d", i);
            }
        }
    } else {
        for (int i = middle+1; i < fullsize; i++){
            if(vetor[i] == whichnum){
                printf("Valor encontrado! Indice: %d", i);
            }
        } 
    } 
}