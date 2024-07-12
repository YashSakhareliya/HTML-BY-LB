#include <iostream>
using namespace std;

bool ismagic(string s){
    long long len = s.length();
    int i=0;
    while(i<len){
        if (s.substr(i, 3) == "144") {
            i += 3;
        } else if (s.substr(i, 2) == "14") {
            i += 2;
        } else if (s.substr(i, 1) == "1") {
            i += 1;
        } else {
            return false;
        }
    }
    return true;
}
int main() {
   long long n;
   cin>>n;
   string s = to_string(n);
   if(ismagic(s)){
       cout<<"YES";
   }else{
       cout<<"NO";
    }
    return 0;
}