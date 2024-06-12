#include <iostream>
using namespace std;

// find arr sum using recursion

int findsum2(int *arr,int size){
    if(size==0)
    return 0;
    
    if(size==1)
    return arr[0];

    return arr[0] + findsum2(arr+1,size-1);
}
int findsum(int arr[],int size, int sum){

    // base case
    if(size == 0)
    return sum;

    sum+=arr[0];
    findsum(arr+1,size-1,sum);
}

int main() {
    int arr[5] = {10,20,20,20,0};

    int size = 5;

    int sum = findsum(arr,size,0);
    cout<<sum<<endl;

    int sum2 = findsum2(arr,size);
    cout<<sum2;
    return 0;
}