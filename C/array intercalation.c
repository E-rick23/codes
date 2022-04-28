#include <stdio.h>

//int fArray(int x, int y, int ar[], int ar2[]);

int main(){
    int x, y;
    scanf("%d", &x);
    int v1[x];
    for (int i = 0; i<x; i++){
        scanf("%d", &v1[i]);
    }
    scanf("%d", &y);
    int v2[y];
    for (int i = 0; i<y; i++){
        scanf("%d", &v2[i]);
    }

    //fArray(x, y, v1[x], v2[y]);
    if (x == y){
        for (int i=0; i<x; i++){
            printf("%d ", v1[i]);
            printf("%d ", v2[i]);
        }
    }
    if (x > y){
        int i = 0;
        for (i=0; i<y; i++){
            printf("%d ", v1[i]);
            printf("%d ", v2[i]);
        }
        for (i; i<x; i++){
            printf("%d ", v1[i]);
        }
    }

    if (y > x){
        int i = 0;
        for (i=0; i<x; i++){
            printf("%d ", v1[i]);
            printf("%d ", v2[i]);
        }
        for (i; i<y; i++){
            printf("%d ", v2[i]);
        }
    }
    return 0;
}

/*int fArray(int x, int y, int ar[], int ar2[]){
    for (int i=0; i<x; i++){
        if (i != 0) printf( ", " );
        printf("%d", ar[i]);
    }
    for (int i=0; i<y; i++){
        if (i != 0) printf( ", " );
        printf("%d", ar2[i]);
    }
    return 0;
}*/