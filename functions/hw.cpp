// function that is added first is called last
//  ap = 3 * n + 7
// i/p = n, o/p = nth term

#include <iostream>
using namespace std;

int ap(int n){
    int a = (3 * n + 7);
    return a;
}

int main(){
    int n;

    cin >> n;

    cout <<"nth term is "<< ap(n)<< endl;

    return 0;
}