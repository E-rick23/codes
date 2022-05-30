#include <stdio.h>
void fatorar(int* x) {
    
    int aux, result = 1;
    
    if (*x > 1) {
        
        aux = *x - 1;
        
        fatorar(&aux);
        
        result = (*x) * aux;
    }
    
    *x = result;
}

void main(){
    int n;
   
    scanf("%d",&n); 
    
    fatorar(&n);
    
    printf("%d", n);
}