/* 
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1*/

#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;

  int row = 1;
  //print space
while(row<=n){
  int space = n - row;
  while(space){
    cout<<" ";
    space = space - 1;

    
  }
  // print 2nd triangle

  int j = 1;
  while(j<= row){
    cout << j;
    j = j + 1;

  }
// third triangle
  int start = row - 1;
  while(start){
    cout<<start;
    start = start - 1;
  }

  cout << endl;
  row = row + 1;
}
}