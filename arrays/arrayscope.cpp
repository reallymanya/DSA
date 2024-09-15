#include <iostream>
using namespace std;

void update(int arr[], int n){ //signature

    cout << "inside the function" << endl;

    //updating array;s first elemnt
    arr[0] = 120;
    //printing the array

    for(int i = 0; i<3; i++){
        cout << arr[i] << " ";
    } cout << endl;

    cout << "going back to main function";
    cout << endl;
}

int main(){
    int arr[3] = {1,2,3};

    update(arr, 3); 

     //printing the array
    cout << "printing the main function"<< endl;
    for(int i = 0; i<3; i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;

} //original array update because base array gets passes so actual array also changes.

//  When you pass an array to a function in C++, you're not giving the function a copy of the array. Instead, you're giving it the address where the original array is stored in memory. This means both the function and the main part of your program are working with the exact same array.