#include<iostream>
using namespace std ;

/*ptint pattern
1234
5678
9101112
13141516

*/
int main (){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    int count = 1;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<count<<"  " ;
            j=j+1;
            count = count +1;
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}