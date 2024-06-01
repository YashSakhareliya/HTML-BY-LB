#include <iostream>
using namespace std;


int main(){

    int n;
    cout<<"Enter row size";
    cin>>n;


// creating array row using dynamic memory
    int **arr = new int*[n];

    // size of each rowth columns

    int *size = new int[n];
    cout<<"Enter the size of each columns"<<endl;
    for(int i=0; i<n; i++){
        cin>>size[i];
    }

    // creating arr

    for(int i=0;i<n;i++){
        int m = size[i];
        arr[i] = new int[m];
    }

    // taking arr input

    for (int i=0;i<n;i++){
        for(int j=0; j< size[i]; j++){
            cin>>arr[i][j];
        }
    }

    // taking arr output

    for (int i=0;i<n;i++){
        for(int j=0; j< size[i]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Working properly"<<endl;

    // release memory

    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete [] arr;

}