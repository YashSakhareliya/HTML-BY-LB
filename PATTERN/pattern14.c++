#include<iostream>
using namespace std ;

/*ptint pattern

****
 ***
  **
   *

*/
int main (){

    
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
    int i=1;
    while (i<=n)
    {
      //space print
      int space = i-1;
      while (space)
      {
        cout<<" ";
        space--;
      }
      int j=n;
      while (j>=i)
      {
        cout<<'*';
        j--;
      }
      
      cout<<endl;
       i++;
      

    }
    
    
    
}