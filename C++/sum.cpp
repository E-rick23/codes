//This code shows the sum of two values entered by the user.

#include <iostream>

using namespace std;

//int function
int soma(int a, int b){
    cout << "int" << endl;
    return a+b;
}

//double function
double soma(double a, double b){
    cout << "Using 'double' Function" << endl;
    return a+b;
}

/*Note: Both of these functions do essentially the same, though,
  one works with double variables, and the other one works with int variables.
  the code will use the one that suits the variable types (which is double by default).*/

int main(){

    cout << "Please enter two values:" << endl;
    double x, y; //This can be changed to "int" if needed!
    cin >> x; //Taking the first value from the user.
    cin >> y; //Taking the second value from the user.
    cout << soma(x,y) << endl; //Executing the appropriate function and sending the result to the user.
    
}

//Remember to build the code to use it! :)

