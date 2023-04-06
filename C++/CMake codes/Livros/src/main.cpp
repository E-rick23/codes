#include <iostream>
#include <string>
#include <vector>
#include "livros.h"

using namespace std;

float media_notas(vector<int> notas) {
    float soma = 0;
    for (int i = 0; i < notas.size(); i++) {
        soma += notas[i];
    }
    return soma / notas.size();
}

float media_notas_livros(vector<Livro> livros) {
    float soma = 0;
    int total_notas = 0;
    for (int i = 0; i < livros.size(); i++) {
        for (int j = 0; j < livros[i].notas_avaliacao.size(); j++) {
            soma += livros[i].notas_avaliacao[j];
            total_notas++;
        }
    }
    return soma / total_notas;
}

int main() {
    vector<Livro> livros;
    
    Livro livro1;
    livro1.titulo = "O Senhor dos Anéis";
    livro1.autor = "J.R.R. Tolkien";
    livro1.notas_avaliacao.push_back(5);
    livro1.notas_avaliacao.push_back(4);
    livro1.notas_avaliacao.push_back(5);
    livro1.notas_avaliacao.push_back(3);
    
    Livro livro2;
    livro2.titulo = "Harry Potter e a Pedra Filosofal";
    livro2.autor = "J.K. Rowling";
    livro2.notas_avaliacao.push_back(4);
    livro2.notas_avaliacao.push_back(3);
    livro2.notas_avaliacao.push_back(5);
    
    livros.push_back(livro1);
    livros.push_back(livro2);
    
    int i = 1;
    while (i == 1){
        int operacao = 0;
        cout << "Escolha uma operação: 1 - Média de notas de avaliação de um livro, 2 - Média de todas as notas de avaliação de todos os livros, 3 - Sair" << endl;
        cin >> operacao;
        if (operacao == 1){
            int livro;
            cout << "Livros disponíveis: " << endl;
            cout << "1 - " << livro1.titulo << endl;
            cout << "2 - " << livro2.titulo << endl;
            cin >> livro;
            if(livro == 1){
                cout << "Média de todas as notas de avaliação de " << livro1.titulo << ": " << media_notas(livro1.notas_avaliacao) << endl;
            }
            if(livro == 2){
                cout << "Média de todas as notas de avaliação de " << livro2.titulo << ": " << media_notas(livro2.notas_avaliacao) << endl;
            }
            cout << endl;
        }
        if (operacao == 2){
            cout << "Média de todas as notas de avaliação de todos os livros no vetor: " << media_notas_livros(livros) << endl;
        }
        if (operacao == 3){
            i = 0;
        }
    }
    return 0;
}