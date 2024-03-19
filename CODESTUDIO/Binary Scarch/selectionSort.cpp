
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
        cout<<arr[i]<<"\n";
    }

    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        swap(arr[i],arr[min]);

    }

     cout<<"array after shorted\n";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    
   
}