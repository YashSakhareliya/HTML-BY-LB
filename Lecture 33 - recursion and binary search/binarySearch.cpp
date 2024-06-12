#include <iostream>
using namespace std;

bool binarySearch(int *arr,int s, int e, int key){

    // base case 
    // first base case
    if(s>e)
    return false;
      
    int mid = s+(e-s)/2;

    // second base case

    if(arr[mid]==key)
    return true;

    
    if(arr[mid]>key)
    return binarySearch(arr,s,mid-1,key);
    if(arr[mid]<key)
    return binarySearch(arr,mid+1,e,key);
    



}

int main() {
    int arr[5] = {1,5,9,10,70};
    int size =5;
    int key = 50;

    bool ispresent = binarySearch(arr,0,size,key);

    if(ispresent)
    cout<<"Present";
    else
    cout<<"absent";
    return 0;
}