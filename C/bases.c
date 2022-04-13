#include <stdio.h>


int operation(int num, int div)
{
    if (num == -1){
        printf("Programa Encerrado!");
    }
    if (num == 0){
        printf("Numero 0(10) na base %d = 0(%d)\n", div, div);
    }
    if (num != -1 && num != 0) {
        int vet_bin[50];

	    int i = 0, j;

	    int aux_num = num;

	    while(num > 0)
	    {
		    vet_bin[i] = num % div;
		    i++;
		    num = num / div;
	    }

	    printf("Numero %d(10) na base %d = ", aux_num, div);

	    for(j = i - 1; j >= 0; j--)
		    printf("%d", vet_bin[j]);
	    printf("(%d)", div);
        printf("\n");

	    return 0;
    }

}

	
int main(){

    int value,base,result;
    do{
        scanf("%d", &value);
        scanf("%d", &base);
        operation(value, base);
    } while (value != -1);
    return 0;
}