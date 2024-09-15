/*#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 2;

    cout << "Enter a number: ";
    cin >> n;

    while(i <= n) {
        sum += i;
        i += 2;
    }

    cout << "Sum of all even numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}*/

//prime number
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 2;
    while (i < n){
        if(n%i == 0){
            cout << "not prime for" << i << endl;

        }
        else{
            cout << "prime for " << i << endl;
        }
        i = i + 1;
    }
}

