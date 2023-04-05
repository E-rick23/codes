#include <iostream>
#include "zoo.h"

using namespace std;

//Função que imprime os animais por especie
void imprimir_animais_por_especie(Zoo zoo, string especie) {
    for (int i = 0; i < zoo.animais.size(); i++) {
        if (zoo.animais[i].especie == especie) {
            cout << zoo.animais[i].nome << ", " << zoo.animais[i].especie << ", " << zoo.animais[i].idade << endl;
        }
    }
}
//Função que remove os animais por idade
void remover_animais_por_idade(Zoo &zoo, int idade_maxima) {
    for (int i = 0; i < zoo.animais.size(); i++) {
        if (zoo.animais[i].idade > idade_maxima) {
            zoo.animais.erase(zoo.animais.begin() + i);
            i--;
        }
    }
}

int main(){
    Zoo zoo1;
    Animal animal1 = {"Leão", "Felino", 5};
    Animal animal2 = {"Macaco", "Símio", 30};
    Animal animal3 = {"Zebra", "Equídeo", 12};
    Animal animal4 = {"Onça Pintada", "Felino", 4};
    Animal animal5 = {"Jaguatirica", "Felino", 2};
    zoo1.animais.push_back(animal1);
    zoo1.animais.push_back(animal2);
    zoo1.animais.push_back(animal3);
    zoo1.animais.push_back(animal4);
    zoo1.animais.push_back(animal5);
    int i = 1;
    while (i == 1){
        int operacao = 0;
        cout << "Escolha uma operação: 1 - Pesquisar por espécie, 2 - Remover por idade, 3 - Sair" << endl;
        cin >> operacao;
        if (operacao == 1){
            string especie;
            cout << "Digite uma espécie: ";
            cin >> especie;
            imprimir_animais_por_especie(zoo1, especie);
            cout << endl;
        }
        if (operacao == 2){
            int idade;
            cout << "Digite a idade: ";
            cin >> idade;
            remover_animais_por_idade(zoo1, idade);
            cout << endl;
        }
        if (operacao == 3){
            i = 0;
        }
    }
    return 0;
}

