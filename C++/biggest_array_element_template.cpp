#include <iostream>

using namespace std;

template<typename list> 

list maior(list ar) {
    int i, n = 10;
    //Loop that stores the biggest number in ar[0].
    for(i = 1;i < n; ++i){
        if(ar[0] < ar[i]){
            ar[0] = ar[i];
        }
    }
    return ar; //Returns the pointer of the array's first element.
}

int main(){
    int arr[10] = {16, 54, 92, 10, 12, 83, 39, 42, 9, 12};
    auto x = maior(arr); //Executes the function.
    int k = *x; //Adquires the value in the pointer.
    cout <<"The biggest value is: " << k << endl; //Sends the result to the user.
    return 0;
}