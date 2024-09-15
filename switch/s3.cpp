#include <iostream>
using namespace std;
int main(){
    int num = 2;
    while (1){
        switch(num){
            case 1 : cout << "number is 1"<<endl;
            break;  
            case 2: cout << "number is 2"<< endl;
            break;
            default:
            cout << "default"<<endl;
        }
        exit(0);
    }
}
//exit(0) indicates a successful termination.
//exit(1) (or any non-zero value) indicates an error or abnormal termination.