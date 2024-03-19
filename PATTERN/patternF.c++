#include<iostream>
using namespace std ;

/*ptint pattern

     1
    121
   12321
  1234321


*/
int main (){

    
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
    int i=1;
    while (i<=n)
    {
      //space triangle

      int space=n-i;
      while (space)
      {
        cout<<" ";
        space--;
      }
      //second triangle

      int j=1;
      while (j<=i)
      {
        cout<<j;
        j++;
      }
      //third triangle
      int start = i-1;
      while (start) 
      {
        cout<<start;
        start--;
      }
      
  
      cout<<endl;
       i++;
      

    }
    
    
    
}