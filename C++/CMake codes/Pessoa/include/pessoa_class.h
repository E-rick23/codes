#include <iostream>
using namespace std;

class Pessoa {
   private:
    string nome;
    int idade;
    float altura;

   public:
    void setNome(string n) {
        nome = n;
    }
    string getNome() {
        return nome;
    }
    void setIdade(int i) {
        idade = i;
    }
    int getIdade() {
        return idade;
    }
    void setAltura(float a) {
        altura = a;
    }
    float getAltura() {
        return altura;
    }
    void imprimirDados() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Altura: " << altura << "m" << endl;
    }

    bool operator>(Pessoa &p) {
        return idade > p.getIdade();
    }

    friend ostream& operator<<(ostream& os, const Pessoa& p) {
        os << "Nome: " << p.nome << endl;
        os << "Idade: " << p.idade << " anos" << endl;
        os << "Altura: " << p.altura <<  "m" << endl;
    return os;
}
};