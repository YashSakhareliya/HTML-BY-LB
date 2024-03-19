#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isyes= 0;
    int ans;
    for (int i = 0; i <= 30; i++)
    {
         ans = pow(2,i);
        if (ans == n)
        {
            isyes=1;
        }
        
        
    }
    if(isyes == 1){
        cout<<"true";
    }
    else{
        cout<<"false"<<endl;
    }


    // type - 2
    
    for (int i = 0; i <= 30; i++)
    {
        
        if (ans == n)
        {
            isyes=1;
        }
        if (ans > __INT_MAX__/2){
    
        
        ans = ans * 2;
        }

        
        
    }
    if(isyes == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }


    
}