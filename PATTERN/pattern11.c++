#include<iostream>
using namespace std ;

/*ptint pattern
D
CD
BCD
ABCD
*/
int main (){

    
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
    
    int i=1;
    while (i<=n)
    {
      char ch='A'+n-i;
        int j=1;
         
        while (j<=i)
        {
          
            cout<<ch;
            j=j+1;
           ch++;
           
            
           
            
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}