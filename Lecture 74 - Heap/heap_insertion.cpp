#include <iostream>

using namespace std;

// create class for heap

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int data){
        size = size+1;
        arr[size] = data;

        int index = size;
        while(index > 1){
            int parent = index / 2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main() {
    
    heap a;
    a.insert(50);
    a.insert(55);
    a.insert(30);
    a.insert(60);
    a.insert(10);
    a.print();
    return 0;
}