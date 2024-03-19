#include<iostream>
using namespace std ;

/*ptint pattern

1234554321
1234**4321
123****321
12******21
1********1
*/
int main (){

    
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    //print first triangle


    int i=1;
    while (i<=n)
    {
      int j=n;
      while (j>=i)
      {
        cout<<n-j+1;
        j--;
      }
      //print second
      int b=(2*i)-2;
      while (b)
      {
        cout<<'*';
        b--;
      }
      

      //print third
      int k=n;
      while (k>=i)
      {
        cout<<k-i+1;
        k--;
      }
      cout<<endl;
      i++;
      
    }
    
}