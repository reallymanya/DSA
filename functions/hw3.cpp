// fibonacci input n output nth fibonacci number
// 0,1,1,2,3, n = 5 output 3

#include <iostream>
using namespace std;

int fibonacci(int n){
    int a = 0, b = 1, c;
    for ( int i = 1; i<n; i++){
    c = a + b;
    a = b;
    b = c;
    }
    return a;
}
int main()
{
    int n;
    cout<<"enter number of which place of fibonacci series you need = ";
    cin>>n;
    cout<<"term of fibonacci series at this place is = "<<fibonacci(n);
    return 0;
}
