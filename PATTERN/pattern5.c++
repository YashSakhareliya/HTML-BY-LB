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
        int count = i;
        int j=1;
        while (j<=i)
        {
            cout<<count;
            j=j+1;
            count ++;
            
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}