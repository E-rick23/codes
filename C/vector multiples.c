#include <stdio.h>

int main(){
    //Declaring array...
    int integers[20], mult[20];
    //Scanning 20 values...
    for (int i=0; i<20; i++){
        scanf("%d", &integers[i]);
    }
    //Printing 20 values...
    for (int i=0; i<20; i++){
        printf("%d", integers[i]);
    }
    return 0;
}