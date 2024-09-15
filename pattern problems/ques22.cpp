#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int row = 1;
    
    while(row<=n){

        //space print
        int space = row - 1;
        while(space) {
            cout<<" ";
            space = space - 1;
        }

        //number
        int col = row;
       
        while(col<=n){
           
            cout<<col;
            
            col = col + 1;
            
           
        }
        cout << endl;
        
        row = row + 1;
        
    
    }
}