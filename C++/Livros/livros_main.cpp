#include <iostream>
#include <string>
#include <vector>
#include "livros.hpp"

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
    
    Livro livro2;
    livro2.titulo = "Harry Potter e a Pedra Filosofal";
    livro2.autor = "J.K. Rowling";
    livro2.notas_avaliacao.push_back(4);
    livro2.notas_avaliacao.push_back(3);
    
    livros.push_back(livro1);
    livros.push_back(livro2);
    
    cout << "Média de todas as notas de avaliação de um livro: " << media_notas(livro1.notas_avaliacao) << endl;
    
    cout << "Média de todas as notas de avaliação de todos os livros no vector: " << media_notas_livros(livros) << endl;
    
    return 0;
}