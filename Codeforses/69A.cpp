#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int matrix[n][3];
    int sumX = 0;
    int sumY = 0;
    int sumZ = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>matrix[i][j];
            if(j == 0) sumX+=matrix[i][j];
            if(j==1) sumY+= matrix[i][j];
            if(j==2) sumZ += matrix[i][j];
        }
    }
    
    if(sumX == 0 && sumY == 0 && sumZ == 0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
  
}