/* 1 7 9 2 3 0 
0 1 2 3 7 9 */

/* selection sort

different rounds/passes
mai smallest element lake usko right jagah par place kar dete h

*/
#include <iostream>
using namespace std;
void selectionsort(int arr[], int n){
for(int i = 0; i<n-1; i++){
            int minIndex = i;


            for(int j = i+1; j<n; j++){
                if(arr[j] < arr[minIndex])
                    minIndex = j;
            }
            swap(arr[minIndex], arr[i]);
        }
}

int main(){
    int a[5] = {7,8,4,2,1};
   
    selectionsort(a, 5);

    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }

    return 0;
}

// sirf variable banae - space complexity - O(1)
// time complexity - O(n2)

// best case - already sorted -> O(n2)
// worst case - O(n2)

//USE CASE:
//when array size is small
