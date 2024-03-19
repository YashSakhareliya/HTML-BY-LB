#include<iostream>
using namespace std;

void printarr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
}

void shortarr(int arr[],int n)
{
    int count1=0,count2=0,count3=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count1++;
        }
        else if(arr[i]==1)
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }
    for (int i = 0; i < count1; i++)
    {
        arr[i]=0;
    }
    for (int i = count1; i < count1+count2; i++)
    {
        arr[i]=1;
    }
    for (int i = count1+count2; i < n; i++)
    {
        arr[i]=2;
    }
    
    
}




int main(){
int arr[8]={1,1,0,2,2,0,1,0};

shortarr(arr,8);
printarr(arr,8);


}