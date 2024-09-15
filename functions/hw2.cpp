// a and b give total no of set bits in a and b a=2,b=3 which is 10 and 11 in binary answer is 3
#include <iostream>
using namespace std;

int setBits(int a){
    int count = 0;
    while(a>0){
    if(a&1){
        count = count + 1;     
    }
    a = a>>1;
    }
    return count;
}

int main(){
    int a,b;
    cin >> a >> b;

    cout << "total number of set bits in a and b are: "<< setBits(a) + setBits(b)<<endl;

    return 0;
}