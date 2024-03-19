#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int sum=0;
    for(int i=n;i>=1;i--)
    {
        sum=sum+i;
    }
    int count2=sum;
    count2=2*count2;
    

    int count=1;
    int b=n;
     
	for(int i=0;i<n;i++)
	{
       
		for(int j=n-i;j>=1;j--)
		{
			cout<<count<<"\t";
			count++;
           
		}
          

        int c3=count2-b+1;
        for(int j=n-i;j>=1;j--)
		{
			cout<<c3<<"\t";
			c3++;
           
		}
        
        count2=count2-b;
        
        b--;
        
        cout<<endl;
        
	}

    
}