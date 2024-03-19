#include<iostream>
using namespace std ;

/*ptint pattern

1111
 222
  33 
   4
*/
int main (){

    
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    //print first triangle


    int i=1;
    while (i<=n)
    {
      int space = i-1;
      while (space)
      {
        cout<<" ";
        space--;
      }
      
      int j=n;
      while (j>=i)
      {
        cout<<i;
        j--;
      }
      
      
      

      cout<<endl;
      i++;
      
    }
    
}