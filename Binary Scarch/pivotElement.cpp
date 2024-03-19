#include<iostream>
using namespace std;

//find pivot element in rotated element

int getpivot(int arr[],  int n)
{
    int s=0;
    int e=n-1;
    int mid = (s+e)/2;

    while(s<e)
    {
        if(arr[mid]>arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid = (s+e)/2;

    }
    return e;
}
int main()
{

int arr[5]={7,8,3,4,5};
cout<<getpivot(arr,5);
}
