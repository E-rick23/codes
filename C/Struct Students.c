#include <stdio.h>
#include <string.h>

struct alunos {
    int matricula;
    char nome[100];
    int disciplina;
    float nota1;
    float nota2;
    float media;
};
void main(){
    struct alunos s[10];
    int c = 1, quantidade;
    scanf("%d", &quantidade);
    while (c<=quantidade){
        scanf("%d,", &s[c].matricula);
        scanf("%s,",&*s[c].nome);
        scanf("%d,",&s[c].disciplina);
        scanf("%f,",&s[c].nota1);
        scanf("%f",&s[c].nota2);
        s[c].media = ((s[c].nota1*1.0)+(s[c].nota2*2.0))/3;
        c++;
    }
    //Printing the results
    for(int i = 1; i<=quantidade; i++)
        printf("%s média final = %0.1f\n", s[i].nome, s[i].media);
}
