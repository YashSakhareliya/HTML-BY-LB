#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
        //elemint is n=2m+1
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for (int j = 0; j < n; j++)
    {
        ans=ans^arr[j];
    }
    cout<<ans;
    
    
}