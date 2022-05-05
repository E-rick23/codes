#include <stdio.h>

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
    /*
    Used for test, will delete later.
    printf("%d ", ma[2][0]);
    printf("%d ", ma[1][0]);
    printf("%d ", ma[0][0]);
    printf("\n");
    printf("%d ", ma[2][1]);
    printf("%d ", ma[1][1]);
    printf("%d ", ma[0][1]);
    printf("\n");
    printf("%d ", ma[2][2]);
    printf("%d ", ma[1][2]);
    printf("%d ", ma[0][2]);
    printf("\n");
    */
    return 0;
}