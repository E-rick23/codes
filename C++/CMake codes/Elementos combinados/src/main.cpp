#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cout << "Digite o " << i+1 << "º valor do vetor: ";
        cin >> a[i];
    }
    cout << "Digite o valor que cuja soma de elementos deve ser igual a: ";
    cin >> x;
    /*cout << "Imprimindo vetor: ";
    for (int i = 0; i < n; i++) {
        if (i >= n-1){
            cout << a[i] << endl;
        }else{
            cout << a[i] << ", ";
        }
        
    }*/
    //A parte acima só foi usada para fins de teste e imprime o vetor digitado.
    bool encontrado = false;
    for (int i = 0; i < (1 << n); i++) {
        int soma = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                soma += a[j];
            }
        }
        if (soma == x) {
            encontrado = true;
            break;
        }
    }
    if (encontrado) {
        cout << "Sim\n";
    } else {
        cout << "Não\n";
    }
}