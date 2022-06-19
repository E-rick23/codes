#include <stdio.h>
//This code spins a matrix 90º degrees
int main(){
    int ma[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &ma[i][j]);
        }
    for (int i = 0; i < 3; i++){
        for (int j = 2; j > -1; j--)
        {   
                printf("%d ", ma[j][i]);
        }
        printf("\n");
    }
    return 0;
}