/*This code sums two values using a template, so in this case
 it doesn't matter if the value is a int, double or float.*/

#include <iostream>

using namespace std;

template<typename T>

T maior(T v1, T v2) {
    if (v1 > v2){
        return v1;
    }

    return v2;
}

int main(){

    auto x = maior(7,3); //Auto identifies the variable type automatically! :O

    cout << x << endl;
    cout << maior(3.4, 7.7) << endl;

    return 0;
}