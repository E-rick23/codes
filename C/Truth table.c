//Simple code that tells the true or false results of the operations, such as "and"(&), "or"(|) and "xor"(^).
#include <stdio.h>

int main() 
{
    char a, symbol, b;
	printf("Welcome, this program allows you to see the truth tables for the operators &, | and ^.\n");
	printf("This program uses the following format: x symbol y. \n");
	printf("Please input the table you want to know about: ");
    scanf("%c %c %c", &a, &symbol, &b);
	//After the input is made, the program will answer with the respective truth table.
	printf("This is the truth table for %c %c %c:\n", a, symbol, b);
    if (symbol == '&'){
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
    if (symbol == '|'){
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
    if (symbol == '^'){
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
