/*cards example
*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
   for(int i = 1; i<n; i++){
       int temp = arr[i];
       int j = i-1;
       for(; j>=0; j--){

           if(arr[j] > temp){
               //shift
               arr[j+1] = arr[j];
           }
           else{ //ruk jao
               break;
           }
       }
       arr[j+1] = temp;
   }

} //s.c = O(1)
// t.c = O(n) worst = O(n2)
int main(){
    int a[6] = {23,45,67,12,21,90};
    insertionSort(a, 6);
    for(int i = 0; i<6; i++){
        cout << a[i] <<" ";
    }
}