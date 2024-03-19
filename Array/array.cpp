#include<iostream>
using namespace std ;
void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int swapealternat(int arr[],int size){
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
    
}

int main (){
    int odd[5]={1,2,3,4,5};
    swapealternat(odd,5);
    printarr(odd,5);
    cout<<endl;
    
   int even[6]={1,2,3,4,5,6};
    swapealternat(even,6);
    printarr(even,6);
    
}
