//counting

#include <iostream>
using namespace std;

// use void when function does not return anything


//function signature
void printCounting(int n) {
    //function body
    for(int i=1; i<=n; i++){
        cout << i <<" "; 
    }
    cout << endl;
   // return;
    
}

int main(){
    int n;
    cin >> n;

    printCounting(n); //function call

    return 0;
}