#include<iostream>
using namespace std;

// Leet code 1712

int main()
{
    

    int arr[]={7,8,1,2,4,5,6};
    int n=7;
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            count++;
        }
    }

    if(arr[n-1]>arr[0])
    count++;

    if(count<=1)
    cout<<"array is shorted and rotated"<<endl;
    else
    cout<<"array is not shorted and rotated"<<endl;



}