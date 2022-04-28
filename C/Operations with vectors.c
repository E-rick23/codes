#include <stdio.h>

int main(){
    int a[3], b[3], c[3], d[3];
    for(int i = 0; i<3; i++){
        scanf("%d", &b[i]);
    }
    for(int i = 0; i<3; i++){
        scanf("%d", &c[i]);
    }
    for(int i = 0; i<3; i++){
        scanf("%d", &d[i]);
    }
    a[0] = b[0]+c[0]-(5*d[0]);
    a[1] = b[1]+c[1]-(5*d[1]);
    a[2] = b[2]+c[2]-(5*d[2]);

    printf("A = [%d,%d,%d]", a[0], a[1], a[2]);
    return 0;
}