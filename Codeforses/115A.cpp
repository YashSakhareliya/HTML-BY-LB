#include <bits/stdc++.h>
using namespace std;

int FindDepth(int i, vector<int>& em){
    
    int depth  =1;
    while(em[i] != -1){
        i = em[i] -1;
        depth++;
    }
    return depth;
}

int main(){
    int n;
    cin>>n;
    vector<int> em(n);
    for(int i=0; i<n; i++){
        cin>>em[i];
    }
    
    int max_depth = 0;
    for(int i=0; i<n; i++){
        int depth = FindDepth(i,em);
        max_depth = max(max_depth, depth);
    }
    
    cout<<max_depth;
  
    
}