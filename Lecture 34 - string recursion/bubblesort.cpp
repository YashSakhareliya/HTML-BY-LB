#include <iostream>
using namespace std;

// bubble sort using recursion
void sortArr(int *arr, int n){
    if(n == 1 || n==0){
        return;
    }

    for(int i=0;i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArr(arr, n-1);
}

int main() {
    int arr[5] = {1, 2, 5 , 3 ,4};
    int n=5;
    sortArr(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}