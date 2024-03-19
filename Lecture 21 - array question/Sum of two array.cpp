#include<iostream>
using namespace std;
#include<vector>

vector<int> swapvector(vector<int> v)
{
    int s=0;
    int e=v.size()-1;

    while(s<e)
    {
        swap(v[s++],v[e--]);
    }
    return v;
}

int main ()
{
    
    int arr1[4]={1,0,0,0};
    int arr2[4]={6,0,0,9};

    vector<int> ans;
    

    int i=4-1;
    int j=4-1;
    int carry=0;

    while (i>=0&&j>=0)
    {
        
        int sum=arr1[i]+arr2[j]+carry;
         carry = sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
        
        
    }
    

    while (i>=0)
    {
        int sum=arr1[i]+carry;
      carry = sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
       
    }

    while (j>=0)
    {
        int sum=arr2[j]+carry;
        carry = sum/10;
        sum=sum%10;
        ans.push_back(sum);
        
        j--;
    }

    while(carry!=0)
    {
        int sum=carry;
        ans.push_back(sum);
        
    }



    vector<int> ans2=swapvector(ans);
    
    for(int i=0;i<ans2.size();i++)
    {
        cout<<ans2[i]<<"\t";
    }

    
}