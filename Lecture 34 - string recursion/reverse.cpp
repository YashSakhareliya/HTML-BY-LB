#include <iostream>
using namespace std;
void reverse(int i, string& s){
    if(i>s.length()-i-1){
        return ;
    }
    swap(s[i],s[s.length()-i-1]);
    
    reverse(++i,s);
}

int main() {
    string name = "yash";
    int i=0;
    int j= name.length()-1;
    reverse(i,name);
    cout<<name;
    return 0;
}