#include <iostream>
#include "Elevador.hpp"

using namespace std;

int main(){
    //Generating an object "elevador1".
    Elevador elevador1 = Elevador(10, 4);
    
    int i = 1; //Variable for the while loop below.
    //While loop that works until i is different than 1.
    while (i == 1)
    {
        cout << "1 - (Subir andar) | 2 - (Descer andar) | 3 - (Entrar) | 4 - (Sair) | 5 - (Encerrar)" << endl;
        int x;
        cin >> x;
        if(x == 1){
            elevador1.sobe();
        }
        if(x == 2){
            elevador1.desce();
        }
        if(x == 3){
            elevador1.entra();
        }
        if(x == 4){
            elevador1.sai();
        }
        if(x == 5){
            i = 0;
        }
        //Printing the status of "elevator1" until the loop ends.
        cout << "Capacidade: " << elevador1.getCapacidade() << endl;
        cout << "Pessoas Presentes: " << elevador1.getPessoasPresentes() << endl;
        cout << "Andar Atual: " << elevador1.getAndarAtual() << endl;
        cout << "Total de andares: " << elevador1.getTotalAndares() << endl;
    }
    
    


}