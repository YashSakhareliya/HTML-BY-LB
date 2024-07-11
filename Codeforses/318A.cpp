#include <iostream>
using namespace std;


int main() {
    long long k,n;
    cin>>n>>k;
    long long odds = (n+1)/2;
    long long ans;
    if(k>odds){// even no
        ans = (k-odds)*2;
    }else{ // odd no
        ans = (k*2)-1;
    }
    cout<<ans;

    return 0;
}