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
       char ch='A'+i-1;
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