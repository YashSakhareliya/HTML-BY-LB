#include<iostream>
using namespace std ;

/*ptint pattern
1
23
345
4567

*/
int main (){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    
    int i=1;
    while (i<=n)
    {
        
        int j=1;
         int b=1;
        while (j<=i)
        {
           
            cout<<i-j+b;
            j=j+1;
            b=b+2;
           
            
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}