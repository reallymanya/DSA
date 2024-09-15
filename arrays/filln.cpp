/*#include <iostream>
using namespace std;

int main(){

    int array[100000];
    for(int i = 0; i<100000; i++){
        array[i] = 1;
        cout << array[i]<< endl;
    }
    return 0;
}*/



#include<iostream>
using namespace std;

int main() {
    int array[100];

    //To initialize the array with value'1'.
    fill_n(array, 100, 1);

    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i <= 5; i++){
        cout << array[i] << endl;
    }

}