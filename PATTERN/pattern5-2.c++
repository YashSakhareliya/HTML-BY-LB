#include<iostream>
using namespace std ;

/*ptint pattern
A
BC
DEF
*/
int main (){

    
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    char ch='A';
    
    int i=1;
    while (i<=n)
    {
      
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