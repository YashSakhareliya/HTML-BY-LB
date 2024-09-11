#include <iostream>
#include <string>
using namespace std;



int main() {
  string s;
  cin>>s;
  
  size_t n = s.length();
  string str="";
  for(size_t i=0; i<n; i++){
      char ch = s[i];
      if(ch >= 'A' && ch <= 'Z'){
          ch = ch - 'A' + 'a';
      }
      
      if(ch =='a' || ch == 'o' || ch == 'y' || ch == 'e' || ch == 'u' || ch == 'i'){
          continue;
      }else{
          str.push_back('.');
          str.push_back(ch);
      }
      
  }
  
  cout<<str;
   
}