/* A
b c
d e f*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char ch = 'A';
    int row = 1;
    while ( row <= n){
        int col = 1;
        while (col <= row) {
            cout<< ch <<" ";
            ch = ch + 1;
            col = col + 1;
            
           
        }
        cout << endl;
        row = row + 1;
    }
}