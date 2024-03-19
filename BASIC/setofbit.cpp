#include<iostream>
using namespace std ;
int totalbit(int n ,int b)
{
    int count=0;
    int count2=0;
   
   while(n!=0 && b!=0)
{
  if (n&1){
     count++;
     
  }
 
  n=n>>1;
   
  

}

while(b!=0){
    if (b&1)
    {
        count2++;
        
        
    }
    b=b>>1;

}

return count+count2;
}

int main()
{
   
    int n,b;
    cin>>n>>b;
    cout<<totalbit(n,b);
   
    
}