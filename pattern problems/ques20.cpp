/*111
  22
    3*/


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int row = 1;
    int num = 1;
    while(row<=n){

        //space print
        int space = row - 1;
        while(space) {
            cout<<" ";
            space = space - 1;
        }

        //number
        int col = 1;
       
        while(col<=n-row+1){
           
            cout<<num;
            
            col = col + 1;
            
           
        }
        cout << endl;
        num = num + 1;
        row = row + 1;
        
    
    }
}