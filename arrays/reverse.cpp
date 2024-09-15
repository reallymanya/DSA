// 2 3 4 5 9
// 9 3 4 5 2
// 9 5 4 3 2
// 9 5 4 3 2

// 1 2 3 4 5 6
// 6 2 3 4 5 1
// 6 5 3 4 2 1
// 6 5 4 3 2 1

#include <iostream>
using namespace std;



void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {1,4,0,5,-2,15};
    int arr2[5] = {2,3,6,9,4};

    reverse(arr, 6);
    reverse(arr2, 5);

    printarray(arr, 6);
    printarray(arr2, 5);
}