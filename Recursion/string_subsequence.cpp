#include <iostream>
#include <vector>
#include <string>
using namespace std;

void PrintSubsequence(string s, int index, string output, vector<string>& ans){
    if(index >= s.length()){

        // this line for not empty subsequence
        if(output.size() > 0){
            ans.push_back(output);
        }
        return;
    }

    // not take ele 
    PrintSubsequence(s, index+1, output, ans);

    // take element
    output.push_back(s[index]);
    PrintSubsequence(s, index+1,output, ans);
}

int main() {
    string s ="abc";
    string output = "";
    int index = 0;
    vector<string>ans;
    PrintSubsequence(s,index, output,ans);

    // print sub sequence
    cout<<"Subsequence is:"<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}