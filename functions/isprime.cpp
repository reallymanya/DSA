#include <iostream>
using namespace std;

// 1 --> prime
// 0 --> not prime

bool isPrime(int n){
    for(int i = 2; i<n; i++){
        //divide hogya h, not a prime no.
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n)) {
        cout << "is a prime no." << endl;
    }
    else{
    cout << "is not a prime number"<<endl;
    }
    return 0;
}