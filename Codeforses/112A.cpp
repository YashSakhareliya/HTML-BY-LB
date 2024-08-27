#include <iostream>
using namespace std;
#include <string>

string lower(string a){
    for(int i=0;i<a.length();i++){
        if(a[i] >= 'A' && a[i] <= 'Z' ){
            a[i] = a[i] + 32;
        }
    }
    return a;
}

int main() {
   string c;
   string d;
   cin>>c;
   cin>>d;
   int ans =0;
   string a =lower(c);
   string b = lower(d);
//   cout<<a<<b;
  for(int i=0;i<a.length();i++){
      if(a[i] != b[i] && a[i] < b[i]){
          ans = -1;
          break;
      }
      else if(a[i] != b[i] && a[i] > b[i]){
          ans = 1;
          break;
      }
       
  }

    cout<<ans;
   
}