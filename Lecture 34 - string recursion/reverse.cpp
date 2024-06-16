#include <iostream>
using namespace std;
string reverse(int i,int j,string s){
    if(i>j){
        return s;
    }
    swap(s[i],s[j]);
    
    return reverse(++i,--j,s);
}

int main() {
    string name = "yash";
    int i=0;
    int j= name.length()-1;
    string r = reverse(i,j,name);
    cout<<r;
    return 0;
}