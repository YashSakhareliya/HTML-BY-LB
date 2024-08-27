// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;



int main() {
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  
  int totalleft = 0;
  for(int i=0;i<n;i++){
      if(arr[i] <= 5-k){
          totalleft++;
      }
  }
  int ans = totalleft/3;
  cout<<ans;
   
}