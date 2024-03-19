#include<iostream>
#include<vector>
using namespace std;

//leetcode question - 88

vector<int> merge(vector<int> nums1, int m, vector<int> nums2, int n) {
        
        int i=0;
        int j=0;
        vector<int> temp(nums1);
        nums1.clear();
        while(i<m && j<n)
        {
            if(temp[i]<nums2[j])
            {
                nums1.push_back(temp[i++]);
            }
            else
            {
                nums1.push_back(nums2[j++]);
            }
        }

        while(i<m)
        {
            nums1.push_back(temp[i++]);
        }

        while(j<n)
        {
            nums1.push_back(nums2[j++]);
        }

        return nums1;
        
        
    }

    void printvector(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
}

int main()
{

    vector<int>nums1;
     vector<int> nums2;

      nums1.push_back(1);
      nums1.push_back(2);
      nums1.push_back(9);
      
      
    nums2.push_back(0);
    nums2.push_back(5);
    nums2.push_back(9);
    nums2.push_back(11);

     int m=nums1.size();
      int n=nums2.size();
    printvector(nums1);
    cout<<endl;
    printvector(nums2);

     merge( nums1, m, nums2,  n);
     cout<<endl;

     printvector(merge( nums1, m, nums2,  n));

}