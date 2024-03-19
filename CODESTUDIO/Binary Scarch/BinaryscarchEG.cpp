#include<iostream>
using namespace std;

int indexvalue(int arr[], int size,int key)
{
  int start = 0;
  int end = size - 1;
  int mid = (start+end)/2;

  while(start<=end)
  {
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(key > arr[mid])
    {
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid = (start + end )/2;
  }
  return -1;
}

int main()
{
    int even[6]={1,2,3,4,5,50};

    int odd[5]={1,2,3,4,5};
    int evenindex=indexvalue(even,6,6);
    int oddindex=indexvalue(odd,5,5);

    cout<<"Index of even array  "<<evenindex<<endl;
    cout<<"Index of odd array   "<<oddindex;

}