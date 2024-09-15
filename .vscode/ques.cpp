#include <iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    cout << "character: "<< ch << endl;
    if (ch >= 'A' &&  ch <= 'Z'){
        cout << "uppercase" << endl;

    }
    else if (ch >= 'a' && ch <= 'z'){
        cout << "lowercase" << endl;
    }
    else{
        cout << "this is a number" << endl;
    }

}