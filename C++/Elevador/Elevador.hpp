#include <iostream>

using namespace std;

class Elevador {
    private:
        int andar_atual;
        int total_andares;
        int capacidade;
        int pessoas_presentes;

    public:
        Elevador(int total_andares, int capacidade) {
            this->andar_atual = 0;
            this->total_andares = total_andares;
            this->capacidade = capacidade;
            this->pessoas_presentes = 0;
        }

        void entra() {
            if (this->pessoas_presentes < this->capacidade) {
                this->pessoas_presentes++;
            }
        }

        void sai() {
            if (this->pessoas_presentes > 0) {
                this->pessoas_presentes--;
            }
        }

        void sobe() {
            if (this->andar_atual < this->total_andares) {
                this->andar_atual++;
            }
        }

        void desce() {
            if (this->andar_atual > 0) {
                this->andar_atual--;
            }
        }

        int getAndarAtual() {
            return this->andar_atual;
        }

        int getTotalAndares() {
            return this->total_andares;
        }

        int getCapacidade() {
            return this->capacidade;
        }

        int getPessoasPresentes() {
            return this->pessoas_presentes;
        }
};
