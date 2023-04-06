#include <iostream>
#include "pessoa_class.h"
using namespace std;

template <typename T>
void maiorIdade(T a, T b) {
    if (a > b) {
        cout << a.getIdade() << endl;
    } else {
        cout << b.getIdade() << endl;
    }
} 

int main() {
    Pessoa p1;
    Pessoa p2;

    p1.setNome("Rick Astley");
    p1.setIdade(57);
    p1.setAltura(1.78);

    p2.setNome("Fausto Silva");
    p2.setIdade(72);
    p2.setAltura(1.88);

    cout << "Maior idade: ";
    maiorIdade(p1, p2);
    cout << endl;

    cout << p1 << endl; //Imprimir o primeiro objeto pessoa.
    cout << p2 << endl; //Imprimir o segundo objeto pessoa.
    
    return 0;
}