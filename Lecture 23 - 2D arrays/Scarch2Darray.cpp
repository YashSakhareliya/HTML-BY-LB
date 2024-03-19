#include<iostream>
using namespace std;

int searchele(int arr[3][4],int target)
{
    bool yes =0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(target==arr[i][j])
            {
                //cout<<"element is present "<<endl;
                yes = 1;
                break;

            }
        }
        if(yes)
        break;
        
    }
    
}

int main()
{
    int arr[3][4];

    //input taking

    for (int i = 0; i < 4; i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[j][i];
        }
    }

//   output taking
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<searchele(arr,3);
    
}