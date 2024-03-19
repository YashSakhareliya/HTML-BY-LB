#include<iostream>
using namespace std;

int main(){
int n,m;
cin>>n>>m;

int arr2[m];
int arr1[n];

    //input arr
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }

    int a=0,b=0;
    while(a<n && b<m)
    {
        if (arr1[a]==arr2[b])
        {
            cout<<arr1[a]<<"  ";
            a++;
            b++;
        }
        else if(arr1[a]>arr2[b])
        {
            b++;
        }
        else{
            a++;
        }
        

    }
    
   




}