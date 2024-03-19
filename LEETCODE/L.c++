#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int arr[6]={1,2,2,3,1,1};

    for(int i=0; i<6; i++){
             for(int j=i+1; j<6; j++){
                 if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                    
                 }
             }
    }
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    
}

    int fe=0;
    int count=0;
    int arr1[]={};

    for(int i=0; i<6; i++){
        if(arr[i]==arr[i+1]){
            fe++;
        }

        else{
            count++;
        }
    for(int i=0;i<count;i++){
    arr1[i]=fe;
    fe=0;
    }

    }
    
    for(int i=0;i<6;i++){
        cout<<arr1[i]<<" ";
    }

    

    for(int i=0; i<6;i++){
        
        if(arr1[i]!=arr1[i+1]){
            
            continue;
        }
        else if(arr1[i]==arr1[i+1]){
            cout<<"false";
            break;
        }
        cout<<"true";
        
    }



     

}