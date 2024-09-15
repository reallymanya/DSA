/* a
b b 
c c c*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    /*char ch = 'A';
    int row = 1;
    while ( row <= n){
        int col = 1;
        while (col <= row) {
            cout<< ch <<" ";
            col = col + 1;
           
        }
        cout << endl;
        ch = ch + 1;
        row = row + 1;
    }*/
    int row = 1;

    while (row<=n){
        int col = 1;
        while(col<= row){
            char ch = ('A' + row - 1);
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}