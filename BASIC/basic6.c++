#include<iostream>
using namespace std ;


//find 1 to n number sum using loop

int main (){
    int n,i=0;
cin>>n;
int sum =0;
while (i<=n)
{
   sum = sum + i; 
   i=i+1;
}
cout<<sum<<endl;

}