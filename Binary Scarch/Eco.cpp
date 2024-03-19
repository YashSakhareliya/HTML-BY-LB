#include<iostream>
using namespace std;

bool ispossible(int arr[],int size,int value,long long int mid)
{
   
    long long int hitesum=0;
    for(int i=0;i<size;i++)
    {
        if(hitesum>value )
        {
            return false;
        }
        else
        {
            if(arr[i]>mid)
            {
                hitesum+=(arr[i]-mid);
            }
        }
    }
    if(hitesum>value )
    {
      return false;
    }
    else
    return true;
}
int main()
{
    int value;
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    cout<<"Enter the value"<<endl;
    cin>>value;

    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    long long int s=0;
    long long int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    long long int e=sum;
    long long int ans;
    long long int mid=s+(e-s)/2;
    while(s<e)
    {
        if(ispossible(arr,size,value,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
    }
    cout<<"ans is"<<endl;
    cout<<ans;

}