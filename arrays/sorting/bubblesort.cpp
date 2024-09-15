/*T.C. = n elements 
n-1 comparison
0(n2)*/

//S.C = O(1), only variables are used

// best case = already sorted --> O(n)
// worst case = reverse sorted --> O(n2)

/*selection sort --  in every round the smallest value takes their correct place.
bubble sort - in every round the largest value takes their correct place.
we can also write selection sort for maximum value 


the main difference is that bubble sort compares between adjecent elements
*/
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{   
   for(int i = 1; i<n; i++){
       //for roundd 1 to n-1
       bool swapped = false;
       for(int j=0; j<n-i; j++){
           //process element till n-i index
           if(arr[j]>arr[j+1]){
               swap(arr[j], arr[j+1]);
               swapped = true;
           }
       }
       if(swapped == false)
       break;
   }
}

int main(){
    int a[6] = {89, 67, 12, 34, 50, 89};
    bubbleSort(a, 6);

    for(int i = 0; i<6;i++){
        cout << a[i]<<" ";
    }
}