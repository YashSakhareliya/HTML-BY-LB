#include <iostream>
using namespace std;

int findsum(int arr[],int size, int sum){

    // base case
    if(size == 0)
    return sum;

    sum+=arr[0];
    findsum(arr+1,size-1,sum);
}

int main() {
    int arr[5] = {0,0,0,0,0};

    int size = 5;

    int sum = findsum(arr,size,0);
    cout<<sum;
    return 0;
}