#include <stdio.h>

struct fraction {
    int numerador;
    int denominador;
};

void main(){
    struct fraction f[2];
    char operation;
    int result, n1, n2, max;
    /*scanf("%d/%d", &f[1].numerador, &f[1].denominador);
    scanf("%d/%d", &f[2].numerador, &f[2].denominador);
    scanf("%c", &operation);*/
    scanf("%d/%d %d/%d %c", &f[1].numerador, &f[1].denominador, &f[2].numerador, &f[2].denominador, &operation);
    n1 = f[1].denominador;
    n2 = f[2].denominador;

    // max is the maximum number between n1 and n2;
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            break;
        }
        ++max;
    }
    //end of mmc operation
    
    if(operation == 'a'){
        if(f[1].denominador == f[2].denominador){
            result = f[1].numerador + f[2].numerador;
            printf("%d/%d", result, f[1].denominador);
        }else{
            int d1, d2, d3, d4;
            d1 = d2 = d3 = d4 = 0;
            d1 = max/f[1].denominador;
            //printf("%d\n", d1);
            d2 = max/f[2].denominador;
            //printf("%d", d2);
            d3 = (d1*f[1].numerador)+(d2*f[2].numerador);
            result = d3;
            printf("%d/%d", result, max);
        }
    }
    if(operation == 'm'){
        int d, n;
        d = f[1].denominador*f[2].denominador;
        n = f[1].numerador*f[2].numerador;
        printf("%d/%d", n, d);
    }
    if(operation == 'd'){
        int dn, nd;
        dn = f[1].numerador*f[2].denominador;
        nd = f[1].denominador*f[2].numerador;
        if (nd < 0){
            nd = nd*-1;
            dn = dn*-1;
        }
        printf("%d/%d", dn, nd);
    }
}