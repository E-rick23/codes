#include <stdio.h>
#include <string.h>
//This code uses a struct to add itens that will be necessary for a party.
//After all items have been added, it shows the total value, and splits it between the members.

//Declaring a struct
struct item {
    char nome[100];
    float preco;
    int quantidade;
};
int main(){
    struct item s[10];
    int c = 1, c1 = 1, check = 0, pessoas = 0;
    float total = 0, divisao;
    //While loop that keeps going until the user inputs 2 after the values.
    while (c==1){
        scanf("%s ,",&*s[c1].nome);
        scanf("%f ,",&s[c1].preco);
        scanf("%d",&s[c1].quantidade);
        total = total + (s[c1].preco*s[c1].quantidade);
        scanf("%d", &check);
        if(check == 2){
            c = 0;
        }
        c1++;
    }
    //Printing the results
    printf("Enter the amount of participants: ");
    scanf("%d", &pessoas);
    divisao = total/pessoas;
    printf("Final value: $ %.02f\n", total);
    printf("$ %.02f for each member.", divisao);
}