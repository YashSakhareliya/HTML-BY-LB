#include<iostream>
using namespace std ;

/*ptint pattern
ABC
BCD
CDE
*/
int main (){

    
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
    int i=1;
    while (i<=n)
    {
      
        int j=1;
         
        while (j<=n)
        {
            char ch='A'+i+j-2;
         
            cout<<ch;
            j=j+1;
            
            
           
            
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}