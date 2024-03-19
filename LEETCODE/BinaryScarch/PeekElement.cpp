#include<iostream>
using namespace std;
//leet code q- 852
int indexvalue(int arr[], int size)
{
  int start = 0;
  int end = size - 1;
  int mid = (start+end)/2;

  while(start<end)
  {
    if(arr[mid]<arr[mid+1])
    {
        start=mid+1;
    }
    else{
      end=mid;
    }
    
    mid = (start + end )/2;
  }
  return start;
}

int main()
{
    int even[6]={1,2,3,4,5,1};

    int odd[5]={1,2,3,4,1};
    int evenindex=indexvalue(even,6);
    int oddindex=indexvalue(odd,5);

    cout<<"Peek of even array index  "<<evenindex<<endl;
    cout<<"peek of odd array   index"<<oddindex;

}