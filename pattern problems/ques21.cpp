/*    1
    2 2
   */



#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int row = 1;
    int num = 1;
    while(row<=n){

        //space print
        int space = n - row;
        while(space) {
            cout<<" ";
            space = space - 1;
        }

        //num
        int col = 1;
        
        while(col<=row){
            cout<<num;
            col = col + 1;
        }
        cout << endl;
        num = num + 1;
        row = row + 1;
    
    }
}