#include<iostream>
using namespace std;

void gf(int N){
    if(N==0)
        return;
        
        static int a=0,b=1;
        static bool isFirst = true;
        
        if(N==1 && isFirst){
            isFirst=false;
            cout<<a<<" ";
        }
        
        if(N>=2 && isFirst){
            isFirst=false;
            cout<<a<<" "<<b<<" ";
        }
        
        if(N>2){
            int c = a*a - b;
            cout<<c<<" ";
            a=b;
            b=c;
            gf(N-1);
            
        }
}
int main()
{
    int N = 0;
    gf(N);
}