#include<iostream>
#include<vector>
using namespace std;

//code stdio - 67 question

vector<int> revers( vector<int> v,int m)
{

    int s=m+1;
    int e=v.size()-1;

    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
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
    int m=2;
    vector<int> v;

    v.push_back(10);
    v.push_back(15);
   v.push_back(9);
    v.push_back(20);
     v.push_back(7);

     vector<int>ans=revers(v,m);

    printvector(v);
    cout<<endl;  
     printvector(ans);  

}