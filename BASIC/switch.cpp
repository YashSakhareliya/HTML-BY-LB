#include<iostream>
using namespace std;
int main()
{
    int n;
    n=1330;
    int a=n/100;
    int c=(n%100)/20;
    int b=(n%100)/50;
    int d=(n%100)%20;
    switch (1)
    {
    case 1:

        
        cout<<"100 note"<<a<<endl;
        case 2:
        
        cout<<"50 note"<<b<<endl;

        case 3:
        
         cout<<"20 note"<<c<<endl;
        
        case 4:
        
         cout<<"1 note"<<d<<endl;
          break;
    }
}