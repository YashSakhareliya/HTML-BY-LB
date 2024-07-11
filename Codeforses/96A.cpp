#include <iostream>
using namespace std;
#include<string>

// football code 

int main() {
    string temp;
    cin>>temp;
    
    if(temp.find("0000000") != string::npos || temp.find("1111111") != string::npos){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

    return 0;
}