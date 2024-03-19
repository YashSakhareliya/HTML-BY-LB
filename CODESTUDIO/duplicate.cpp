#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

int arr[n];
    //input arr
for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //xor element
    int ans=0;
    for (int j = 0; j < n; j++)
    {
        ans=ans^arr[j];
    }
   
    for (int j = 0; j < n; j++)
    {
        ans=ans^j;
    }
    cout<<ans;




}