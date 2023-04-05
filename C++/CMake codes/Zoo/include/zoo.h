#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
public:
    string nome;
    string especie;
    int idade;
};

class Zoo {
public:
    vector<Animal> animais;
};