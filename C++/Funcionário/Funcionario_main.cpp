#include <iostream>
#include "Funcionario.hpp"

using namespace std;

int main() {
    vector<Funcionario> funcionarios = {
        {"Edward", 4000.10, "TI"},
        {"Yuri", 2458.25, "RH"},
        {"Zack", 7894.00, "TI"},
        {"Len", 3256.90, "RH"}
    };

    string departamento = "TI";
    cout << "Funcionários do departamento " << departamento << ":" << endl;
    for (Funcionario f1 : funcionarios) {
        if (f1.departamento == departamento) {
            cout << f1.nome << endl;
        }
    }

    float P_aumento = 10; // Porcentagem do aumento
    cout << endl << "Aumentando o salário do departamento " << departamento << " em " << P_aumento << "%:" << endl;
    for (Funcionario& f1 : funcionarios) {
        if (f1.departamento == departamento) {
            f1.salario *= (1 + P_aumento / 100);
            cout << f1.nome << ": R$" << f1.salario << endl;
        }
    }
    return 0;
}
