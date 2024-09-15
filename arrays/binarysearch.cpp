/* only on monotonic functions
either ascending order or descending order*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = start+(end-start)/2; //optimised formula

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        // go to right wala part
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{ //go to left part
            end = mid - 1;
        }

        mid = start+(end-start)/2;
    }

    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenindex = binarySearch(even, 6, 6);

    cout << " Index of 6 is "<< evenindex << endl;

     int oddindex = binarySearch(odd, 5, 20);

     cout << " Index of 20 is "<< oddindex << endl;

    return 0;

}

// l.s --> 1000 values -->  array
// worst case comparison 1000 values  complexity : O(n)

// b.s ---> 1000 value --> sorted array
// 1000 size --> 500 --> 250 --> 125 --> 62 --> 31 --> 15 --> 7 --> 3 --> 1 --> 0 // 10 comparison 
// complexity O(log n)