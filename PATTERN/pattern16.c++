#include<iostream>
using namespace std ;

/*ptint pattern
   1
  22
 333
4444 
 
*/
int main (){

    
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    //print first triangle


    int i=1;
    while (i<=n)
    {
      int space = n-i;
      while (space)
      {
        cout<<" ";
        space--;
      }
      
      int j=1;
      while (j<=i)
      {
        cout<<i;
        j++;
      }
      
      
      

      cout<<endl;
      i++;
      
    }
    
}