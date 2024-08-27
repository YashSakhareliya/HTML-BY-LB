#include <iostream>
using namespace std;


int main() {
    int i1,i2;
  int data;
   int matrix[5][5];
   for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           cin>>data;
           matrix[i][j]= data;
           if(data==1)
           {
               i1=i;
               i2=j;
           }
       }
   }
   
   int ans = 0;
   ans+=abs(i1-2);
   ans+=abs(i2-2);
   cout<<ans;
}