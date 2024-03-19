#include<iostream>
using namespace std;
//code studio - 11
int firstocc(int arr[], int size,int key)
{
  int start = 0;
  int end = size - 1;
  int mid = (start+end)/2;
    int ans=-2;
  while(start<=end)
  {
    
    if(arr[mid]==key)
    {
        ans=mid;
        end=mid-1;
    }
    else if(key > arr[mid])
    {
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid = (start + end )/2;
  }
  return ans;
}

int lastocc(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  int mid = (start+end)/2;
    int ans=-2;
  while(start<=end)
  {
    if(arr[mid]==key)
    {
        ans=mid;
        start=mid+1;
    }
    if(key > arr[mid])
    {
        start=mid+1;
    }
    else if(key < arr[mid]){
        end=mid-1;
    }
    mid = start +(end-start )/2;
  }
  return ans;
}

int main()
{
    int even[7]={0,3,3,3,3,3,3};
    
    cout<<"Index of first occ array  "<<firstocc(even,7,3)<<endl;
    cout<<"Index of last occ array   "<<lastocc(even,7,3);

}