#include<iostream>
using namespace std ;
int fibonachi(int n)
{
    int a=0;
    int b=1;
    int fib;
    if(n==1)
    {
        return 0;
        
    }
    else if (n==2)
    {
        return 1;
    }
    
    
    for (int i = 1; i <= n-2; i++)
    {
      fib=a+b;
       int temp=b;
       b=fib;
       a=temp;
       
    }
     return fib;
   
    
}

int main()
{
  int n;
  cin>>n;
  cout<<fibonachi(n);  
   
    
}