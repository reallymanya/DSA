#include <iostream>
using namespace std;
int main(){
   /* for(int i = 0; i<=5; i++) {
        cout << i << " ";
        i++;
    }*/
    /*for(int i = 0; i<=5; i--){
        cout << i << " ";
        i++;*/
        /*for(int i = 0; i<5; i++){
            for(int h = i; h<=5; h++){
                if(i + h == 10){
                    break;
                }
                cout <<i << " "<< h << endl;
            }
            

        }*/
        for(int i = 0; i<=15; i +=2){
            cout << i << " ";

            if(i&1){
                continue;
            }
            i++;
        }

        
    }
