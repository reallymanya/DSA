/*#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = a+1;

    if((a=3)==b) {
        cout <<a;
    }
    else
    {
        cout << a+1;
    }
}*/

#include <iostream>
using namespace std;

int main() {
    int a = 24;

    if (a > 20) {
        cout << "Love ";
    } else if (a == 24) {
        cout << "Lovely ";
    } else {
        cout << "Babbar ";
    }

    cout << a; // Print the value of a

    return 0; // Indicate successful program termination
}