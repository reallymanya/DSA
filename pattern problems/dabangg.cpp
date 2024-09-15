#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
//first pattern
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j = j+1;
        }
    
//second pattern
int star = 2*(i-1);
while (star)
    {
      cout<<'*';
      star=star-1;
    }
    
// third patterm
    int count = n-i+1;
    while(count){
        cout<<count;
        count = count - 1;
    }


    cout << endl;
    i = i + 1;
}
}