#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter value of a: "<<endl;
    cin >> a;

    cout << "enter value of b: "<<endl;
    cin >> b;

    char op;

    cout << "enter operation you want to perform"<<endl;
    cin >> op;

    switch(op){
        case '*':{cout << (a*b) << endl;}
            break;
        case '+':cout << (a+b) << endl;
            break;
        case '-':cout << (a-b) << endl;
            break;
        case '/':cout << (a/b) << endl;
            break;
        default:
            cout << "please enter a valid operator"<<endl;


    }



    return 0;
}