#include <stdio.h>

int main(){
    int t1, t2, t3, c = 0;
    scanf("%d %d", &t1, &t2);
    t3 = t1+t2;
    int v1[t1], v2[t2], v3[t3];
    for(int i = 0; i < t1; i++){
        scanf("%d", &v1[i]);
    }
    for(int i = 0; i < t2; i++){
        scanf("%d", &v2[i]);
    }
    for(int i = 0; i < t1; i++){
        v3[c++] = v1[i];
    }
    for(int i = 0; i < t2; i++){
        v3[c++] = v2[i];
    }
    for(int i = 0; i < t3; i++){
        printf("%d \n", v3[i]);
    }
    return 0;
}