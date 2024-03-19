#include<iostream>
using namespace std ;

/*ptint pattern
ABC
DEF
GHI
*/
int main (){

    
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
    int i=1;
    
    char ch = 'A';

    while (i<=n)
    {
        
        
        int j=1;
         
        while (j<=n)
        {
            
           
            cout<<ch;
            j=j+1;
            ch++;
            
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}