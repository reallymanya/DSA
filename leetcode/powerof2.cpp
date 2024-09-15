#include <iostream>
using namespace std;


bool isPowerofTwo(int n) {
    return  (n > 0) && (n & (n-1)) == 0;
     //for a number to be a power of 2, it must have exactly one bit set in its binary representation.
     /*For n = 16 (which is 10000 in binary):
n - 1 = 15 (which is 01111 in binary).
n & (n - 1) = 10000 & 01111 = 00000.
Since the result is 0, 16 is indeed a power of 2.
*/
}

int main(){
    int num;
    cin >> num;

    if(isPowerofTwo(num)){
        cout << num << " is a power of 2" << endl;

    }
    else{
        cout << num <<  " is not a power of 2" << endl;
    }

    return 0;
}