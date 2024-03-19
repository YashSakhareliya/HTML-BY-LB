
#include<iostream>
using namespace std;



//Selection short


int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element arr\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"array before shorted\n";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;

     cout<<"array after shorted\n";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    
   
}