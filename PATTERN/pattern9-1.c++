#include<iostream>
using namespace std ;

/*ptint pattern
123
234
345
*/
int main (){

    
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    int num;
    int i=1;
    while (i<=n)
    {
       num=i; 
        int j=1;
         
        while (j<=n)
        {
          
            cout<<num;
            j=j+1;
            num++;
            
           
            
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}