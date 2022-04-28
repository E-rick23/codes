#include <stdio.h>

int main(){
    int size;
    scanf("%d", &size);
    if (size > 10){
        printf("Muitos elementos");
    }
    if (size <= 10){
        int a[size], b[size], sum[size];
        for (int i = 0; i<size; i++){
            scanf("%d", &a[i]);
        }
        for (int i = 0; i<size; i++){
            scanf("%d", &b[i]);
        }
        for (int i = 0; i<size; i++){
            sum[i] = a[i]+b[i];
        }
        for (int i = 0; i<size; i++){
            printf("%d ", sum[i]);
        }
        
    }
    
    return 0;
}