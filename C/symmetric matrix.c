#include <stdio.h>
#include <stdbool.h>

int main(){
    int t1, t2;
    bool lever = true;
    scanf("%d %d", &t1, &t2);
    int m[t1][t2];
    for(int i = 0; i < t1; i++)
        for(int j = 0; j < t2; j++)
        {
            scanf("%d", &m[i][j]);
        }
    int m2[t2][t2];
    for(int i = 0; i < t1; i++)
        for(int j = 0; j < t2; j++)
        {
            m2[i][j] = m[j][i];
        }

    /*for(int i = 0; i < t1; i++)
        for(int j = 0; j < t2; j++)
        {
            printf("%d", m[i][j]);
        }
    printf("\n");
    for(int i = 0; i < t1; i++)
        for(int j = 0; j < t2; j++)
        {
            printf("%d", m2[i][j]);
        }
    */
    for(int i = 0; i < t1; i++)
        for(int j = 0; j < t2; j++)
        {
            if(m[i][j] != m2[i][j])
                lever = false;
        }
    if(lever == true)
        printf("Matriz Simétrica");
    else if(lever == false)
        printf("Matriz não Simétrica");
    return 0;
}