#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    cout << " printing the array " << endl;
    // print the array
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << " printing done" << endl;


}

int main(){
    // initialize

    int number[15];
    //accessing array
    cout << "value at 14 index " << number[14] << endl;

    //error:
    // cout << "value at 20 index " << number[20] << endl;

    int second[3] = {5,7,11};

    cout << "value at 2 index " << second[2] << endl;


    int third[15] = {2,7};

    int n = 15;

    // print array
    printArray(third, 2);
    /*for(int i = 0; i<n; i++) {
        cout << third[i] << " ";
    }
    // extra places 0 will print*/


    //initalising all locations with 0

    int fourth[10] = {0};

    n = 10;
    //cout << " printing the array " << endl;
    //print array
    printArray(fourth, 10);
    /*for (int i = 0; i < n; i++)
    {
       cout << fourth[i] << " ";
    }*/

    // initalising all locations with 1

    int fifth[10] = {1};

    n = 10;
    //cout << " printing the array " << endl;
    //print array
    printArray(fifth, 10);
    /*for (int i = 0; i < n; i++)
    {
       cout << fifth[i] << " ";
    }*/
    
    char ch[5] = {'a', 'b', 'c', 'r', 'p'};

    cout << ch[3] << endl;

    cout <<  endl << "printing the array"<< endl;
    for(int i =0; i<5; i++) {
        cout << ch[i] << " ";
    }
    cout << endl<<" printing DONE " << endl;

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];



   

    


    cout << endl << "everything is fine" << endl << endl;
    return 0;
}