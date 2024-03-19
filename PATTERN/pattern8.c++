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
    int k=1;
    

    while (i<=n)
    {
        
        
        int j=1;
         
        while (j<=n)
        {
            char ch = 'A'+k-1;
           
            cout<<ch;
            j=j+1;
            k=k+1;
            
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}