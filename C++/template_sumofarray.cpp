//This code sums the values inside two arrays into a new array and shows the result to the user.
#include <iostream>

using namespace std;

template<typename sum>
sum twoarrays(sum ar1, sum ar2, sum ars) {
    int i, n = 5;
    //Loop that stores the sum of the two array's values into a new array.
    for(i = 0;i < n; ++i){
        ars[i] = ar1[i] + ar2[i];
    }
    return ars; //Returns the pointer of the array's first element.
}

int main(){
    //Declaring variables
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {5,4,3,2,1};
    int arrs[5];
    //Declaring pointer that receives new array.
    int *ptr = twoarrays(arr1, arr2, arrs);

//Printing the results

    cout << "Resulting Array: [ ";

    for(int i = 0; i < 5; i++){
        //This if-else statement only ensures that the result is printed in a nice way :)
        if(i == 4){
            cout << ptr[i] << " ";
        }
        else {
            cout << ptr[i] << ", ";
        }   
    }    
    cout << "]" << endl;
}