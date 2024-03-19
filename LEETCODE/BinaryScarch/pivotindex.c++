#include<iostream>
using namespace std;
// leetcode question  
int pivotelement(int arr[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int start=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum - arr[i];
        if(start==sum)
        {
            return i;
        }
        start+=arr[i];
    }
    return -1;
}


int main()
{
    int nums[5]={1,2,3,2,1};
    cout<<pivotelement(nums,5);
    
    


}
