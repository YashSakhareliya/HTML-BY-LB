#include<iostream>
using namespace std ;
/*make this pattern
111
222
333
*/

int main (){
    int n;
    cout<<"enter value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}