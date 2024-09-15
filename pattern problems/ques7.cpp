#include <iostream>
using namespace std;
int main() {
    /*int n;
    cin >> n;

    int row = 1;

    while ( row <= n) {
        int col = 1;
        int value = row;
        while (col <= row) {
            cout << value<<" ";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}*/

   
int n;
  cin >> n;

  int row = 1;
  while (row <= n) {
    int column = 1;

    while (column <= row) {
      cout << column + row - 1 << " ";
      column++;
    }
    cout << endl;
    row++;
  }
}

/*int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j = i;
        while(j<2*i){
            cout<<j<<" ";
            j =j+1;
        }
        cout<<endl;
        i =i+1;
    }*/