/* total amount = 1330
hundred notes
fifty notes
twenty notes
one note
13= 100
1 = 20
10 = 1*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
   int Rs100,Rs50, Rs20 , Rs1 ;
   int many = 1;

    switch(many){
        case 1: Rs100 = n/100;
        n = n%100;
        cout << "no of 100 rupee notes: "<<Rs100<<endl;
        


        case 2: Rs50 = n/50;
        n = n%50;
        cout << "no of 50 rupee notes: "<<Rs50<<endl;
       

        case 3: Rs20 = n/20;
        n = n%20;
        cout << "no of 20 rupee notes: "<<Rs20<<endl;
        
        case 4: Rs1 = n/1;
        n = n%1;
        cout << "no of 1 rupee notes: "<<Rs1<<endl;
      
        

        
    }
    return 0;
}
