// to print numbers from 1 to n

/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        cout <<i<<" ";
        i = i+1;
    }

}*/

//sum of numbers from 1 to n
/*#include <iostream>
using namespace std;
int main() 
    int n;
    cin >> n;

    int i = 1;
    int sum = 0;
    while(i<=n){
        sum = sum + i;
        i = i + 1;
    }
    cout << "value of sum is "<<sum<<endl;
}*/

// sum of all even numbers from 1 to n
#include <iostream>
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
}

