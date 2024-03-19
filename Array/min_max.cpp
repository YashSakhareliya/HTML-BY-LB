#include<iostream>
using namespace std ;

int max(int arr[],int n)
{
    int max= INT32_MIN;
    for(int i=0; i<n;i++)
    {
        if(arr[i]>max)
        {
          max=arr[i];  
        }
    }
    return max;
}
int min(int arr[],int n)
{
    int min= INT32_MAX;
    for(int i=0; i<n;i++)
    {
        if(arr[i]<min)
        {
          min=arr[i];  
        }
    }
    return min;
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