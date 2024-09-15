// program that has well defined task
#include <iostream>
using namespace std;

int power(){
    int num1, num2;
    cin >> num1 >> num2;
    int ans = 1;

    cout << num1 << endl;
    cout << num2 << endl;
    for(int i = 1; i<=num2; i++){
        ans = ans * num1;
    }
    return ans;
}

int main(){
    // a and b local variables only defined inside main
    /*int a,b;
    cin >> a >> b;
    int ans = power(a,b);

    cout << "answer is " << ans << endl;

    int c,d;
    cin >> c >> d;
    int answer = power(c,d);

    cout << "answer is " << answer << endl;
*/
    int ans = power();
    cout << "answer is "<< ans << endl;

    ans = power();
    cout << "answer is "<< ans << endl;

    ans = power();
    cout << "answer is "<< ans << endl;
    return 0;
}