#include <stdio.h>
//This code spins a 3x3 matrix 90º degrees
void main(){
    int ma[3][3];
    //Adquiring the matrix values.
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &ma[i][j]);
    //Spinning the matrix
    for (int i = 0; i < 3; i++){
        for (int j = 2; j > -1; j--)
                printf("%d ", ma[j][i]);
        printf("\n");
    }
}