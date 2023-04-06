#include <iostream>
#include "pessoa_class.h"
using namespace std;

int main() {
    Pessoa p1;

    p1.setNome("Rick Astley");
    p1.setIdade(57);
    p1.setAltura(1.7);

    p1.imprimirDados();

    return 0;
}