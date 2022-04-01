#include <stdio.h>

int main() 
{
    char a, simbolo, b;
    scanf("%c %c %c", &a, &simbolo, &b);

    if (simbolo == '&'){
    		printf("-------\n");
    		printf("|%c||%c||r|\n", a, b);
    		printf("+-+-+-+\n");
    		printf("|0|0|0|\n");
    		printf("+-+-+-+\n");
    		printf("|0|1|0|\n");
    		printf("+-+-+-+\n");
    		printf("|1|0|0|\n");
    		printf("+-+-+-+\n");
    		printf("|1|1|1|\n");
    };
    if (simbolo == '|'){
    		printf("-------\n ");
    		printf("|%c||%c||r|\n", a, b);
    		printf("+-+-+-+\n");
    		printf("|0|0|0|\n");
    		printf("+-+-+-+\n");
    		printf("|0|1|1|\n");
    		printf("+-+-+-+\n");
    		printf("|1|0|1|\n");
    		printf("+-+-+-+\n");
    		printf("|1|1|1|\n");

    };
    if (simbolo == '^'){
    	    printf("-------\n");
    		printf("|%c||%c||r|\n", a, b);
    		printf("+-+-+-+\n");
    		printf("|0|0|0|\n");
    		printf("+-+-+-+\n");
    		printf("|0|1|0|\n");
    		printf("+-+-+-+\n");
    		printf("|1|0|0|\n");
    		printf("+-+-+-+\n");
    		printf("|1|1|1|\n");

    };
    return 0;
}
