#include<vector>
#include<iostream>
using namespace std;

int ispossible(int arr[], int mid,int m , int n)
{
    int member=1;
    int pagecount=0;
    for(int i=0;i<n;i++)
    {
        if(pagecount+arr[i]<=mid)
        {
            pagecount+=arr[i];
        }
        else
        {
            member++;
            if(member>m||arr[i]>mid)
            return false;


            pagecount=arr[i];
        }
    }
    return true;
    
}






int main()
{
    int arr[]={10,20,30,40};
    int n=4;
   int m=2;
   int s=0;
   int sum=0;
   for(int i=0;i<n;i++)
   {
    sum+=arr[i];
   }
   int e=sum;

   int mid = s+(e-s)/2;
    int ans;
   while(s<e)
   {
    if(ispossible(arr,mid,m,n))
    {
        ans=mid;
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
    mid = s+(e-s)/2;
   }

    cout<<ans;
}