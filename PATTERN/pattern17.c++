#include<iostream>
using namespace std ;

/*ptint pattern
   1
  23
 456
78910 
 
*/
int main (){

    
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    //print first triangle
   int count =1;

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
        cout<<count;
        j++;
        count++;
      }
      
      
      

      cout<<endl;
      i++;
      
    }
    
}