#include<iostream>
using namespace std;

// Leet code 287 q

int main()
{

    int n;
    int arr[6]={1,5,0,8,0,0};
    n=6;
    
        int j=0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j++]);
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    
}