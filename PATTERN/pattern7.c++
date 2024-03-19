#include<iostream>
using namespace std ;

/*ptint pattern
AAA
BBB
CCC
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
           char ch = 'A'+i-1;
            cout<<ch;
            j=j+1;
            
           
            
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}