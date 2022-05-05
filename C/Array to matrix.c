#include <stdio.h>

int main(){
    int tam;
    scanf("%d", &tam);
    int v[tam];
    for(int i = 0; i < tam; i++)
        scanf("%d", &v[i]);
    int *ptr = NULL;

    int m1, m2, v1, v2;
    scanf("%d %d", &m1, &m2);
    scanf("%d %d", &v1, &v2);
    int m[m1][m2];
    int c = 0;
    for(int i = 0; i < m1; i++)
        for (int j = 0; j < m2; j++){
            m[i][j] = v[c];
            c++;
        }
    printf("%d", m[v1][v2]);
    //ptr = &v[i];
    //printf("%p ", ptr);
    return 0;
}