/* ip size =  5
then 5 elements
op sum of all elements in an array */
#include <iostream>
using namespace std;

int getsum(int num[], int n) {


    int sum = 0;
    for(int i = 0; i<n; i++){
       sum = sum + num[i];
        }
    

    return sum;
}

int main(){

    int size;
    cin >> size;

    int arr[100];

    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << endl << "the sum is" << endl;
     cout << getsum(arr,size)<< endl;
}