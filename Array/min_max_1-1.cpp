#include<iostream>
using namespace std ;

int max(int arr[],int n)
{
    int maxi= INT32_MIN;
    for(int i=0; i<n;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int min(int arr[],int n)
{
    int mini= INT32_MAX;
    for(int i=0; i<n;i++)
    {
       mini=min(mini,arr[i]); 
    }
    return mini;
}


int main()
{
    int size;
    cout<<"enter the size = ";
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"max value is"<<max(num,size)<<endl;
    cout<<"min value is"<<min(num,size)<<endl;
}