#include <iostream>
using namespace std;


int getMax(int num[], int n) {
    int maxi = INT_MIN; //max = -2147483648 initially

    
    for(int i = 0; i<n; i++){
        maxi = max(maxi, num[i]);


        //if (num[i] > max){
            //max = num[i]; // Update max whenever a larger value is found
   // }

        }
    

    return maxi;
}
/* int num[] = {3, 1, 7, 5};
// Iteration 1: max = 3 (because 3 > -2147483648)
// Iteration 2: max = 3 (because 1 is not greater than 3)
// Iteration 3: max = 7 (because 7 > 3)
// Iteration 4: max = 7 (because 5 is not greater than 7)

You start with max set to INT_MIN, the smallest possible integer value.
This ensures that any number in the array will be larger than max initially.

*/

int getMin(int num[], int n) {
    int mini = INT_MAX;

    for(int i = 0; i<n; i++){
        mini = min(mini, num[i]);
        //if (num[i] < min){
        //    min = num[i];
       // }
    }

    return mini;
}
/* You start with min set to INT_MAX, the largest possible integer value.
This ensures that any number in the array will be smaller than min initially.
int num[] = {3, 1, 7, 5};

Iteration 1: min = 3 (because 3 < 2147483647)
// Iteration 2: min = 1 (because 1 < 3)
// Iteration 3: min = 1 (because 7 is not smaller than 1)
// Iteration 4: min = 1 (because 5 is not smaller than 1)

*/
int main(){

    int size;
    cin >> size;

    int num[100]; //always take number inside
    //taking array input
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }
    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;
   
}