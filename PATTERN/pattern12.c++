#include<iostream>
using namespace std ;

/*ptint pattern
    *
   **
  ***
 **** 
  */
int main (){

    
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
    int i=1;
    while (i<=n)
    {
      //space print first

      int space = n-i;
      while (space)
      {
        cout<<" ";
        space--;
      }
      //after star print
      int j=1;
      while (j<=i)
      {
        cout<<'*';
        j++;
      }
      cout<<endl;
       i++;
      

    }
    
    
    
}