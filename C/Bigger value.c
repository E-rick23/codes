#include <stdio.h>
 
void main()
{   
    //Declarando variáveis
    int array[100], *max, tam;
    //Recebendo tamanho do vetor
    scanf("%d", &tam);
    //Recebendo valores
    for (int i = 0 ; i < tam ; i++ )
        scanf("%d", &array[i]);
    
     max = array;
     //O ponteiro max recebe o ponteiro da array
    *max = *array;
    //Loop que adquire o maior valor.
    for(int i = 1; i < tam; i++){
        if (*(array+i) > *max)
            *max = *(array+i);
    }
    printf("O maior valor é %d.\n", *max);
}