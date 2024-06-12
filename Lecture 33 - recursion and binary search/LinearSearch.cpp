#include <iostream>
using namespace std;

bool linearSearch(int *arr, int size, int key){

    // base case
    if(size == 0)
    return false;

    if(arr[0]==key)
    return true;
    else{
        linearSearch(arr+1,size-1,key);
    }
}

int main() {
    int arr[5] = {1,5,9,8,7};
    int size =5;
    int key = 5;

    bool ispresent = linearSearch(arr,size,key);

    if(ispresent)
    cout<<"Present";
    else
    cout<<"absent";
    return 0;
}