#include<iostream>
using namespace std;

// array is sorted or not using recursion

bool issorted(int arr[], int size){
    // base case
    if(size == 0 || size == 1){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;

    }
    else{
        bool ans = issorted(arr+1,size-1);
        return ans;
    }
}

int main(){

    int arr[5] = {1,2,5,9,10};
    int size = 5;

    bool sorted = issorted(arr, size);
    if(sorted)
    cout<<"Array is sorted";
    else
    cout<<"Array is not sorted";
}