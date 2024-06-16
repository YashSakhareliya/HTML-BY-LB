#include <iostream>
using namespace std;

// selectoin sort using recursion

void sortArr(int *a, int n){
    if(n == 0 || n==1)
    return;
    int minind = 0;

    for(int i=0;i<n;i++){
        if(a[i]<a[minind])
        minind = i;
    }
    if(minind != 0){
        swap(a[0],a[minind]);
    }

    sortArr(a+1,n-1);
}

int main() {
    int arr[5] = {1, 2, 5 , 3 ,40};
    int n=5;
    sortArr(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}