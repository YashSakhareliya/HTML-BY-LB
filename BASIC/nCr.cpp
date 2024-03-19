#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
  for (int i = 1; i <= n; i++)
  {
    fact = fact*i;
  }
  return fact;
  
}
int ncr(int a,int b)
{
    int upp = factorial(a);
    
    int down = factorial(b)*factorial(a-b);
    
    int ans = upp/down;
    cout<<ans;
}


int main ()
{
    int a,b;
    cout<<"enter value"<<endl;
    cin>>a>>b;
   ncr(a,b);
   
}