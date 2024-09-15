


#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    if(n < 0){
        n = -1*n;
    }

    while (n!=0){
        int bit = n & 1;//reads last bit

        ans = (bit * pow(10,i)) + ans;

        n = n >> 1;//helps to read other bits by right shifting
        i++;
    }

    cout << " answer: "<< ans;

}



    
