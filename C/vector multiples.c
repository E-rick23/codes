#include <stdio.h>

int main(){
    //Declaring array...
    int inteiros[20];
    //Scanning 20 values...
    for (int i=0; i<20; i++){
        scanf("%d", &inteiros[i]);
    }
    //Printing 20 values...
    for (int i=0; i<20; i++){
        printf("%d", inteiros[i]);
    }
    return 0;
}