#include<iostream>
using namespace std;

int main()
{
    int arr[6]={1,0,3,0,5,4};
    int n=6;

    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[j],arr[i++]);
        }
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<"\t";
    }
}