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
    int i=0;
    int j=n-1;
    while (i<j)     
    {
        
        if (arr[i]==0 && i<j )
        {
            i++;
        }
        
        if (arr[j]==1  && i<j)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    
}




int main(){
int arr[8]={1,1,0,0,0,0,1,0};

shortarr(arr,8);
printarr(arr,8);


}