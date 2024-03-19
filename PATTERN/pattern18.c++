#include<iostream>
using namespace std ;

/*ptint pattern
1234
 234
  34
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

      int count =i;

      int space = i-1;
      while (space)
      {
        cout<<" ";
        space--;
      }
      
      int j=n;
      while (j>=i)
      {
        cout<<count;
        j--;
        count++;
      }
      
      
      

      cout<<endl;
      i++;
      
    }
    
}