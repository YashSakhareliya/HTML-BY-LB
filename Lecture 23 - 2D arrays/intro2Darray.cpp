#include<iostream>
using namespace std;

void rowsum(int arr[3][4])
{
    cout<<"Row sum"<<endl;
    for(int i=0;i<3;i++)
    {
        int sum = 0;
        for(int j=0;j<4;j++)
        {
            sum+= arr[i][j];
        }
        cout<<i<<" -> "<<sum<<endl;
    }
}

void colsum(int arr[3][4])
{

    cout<<"Col sum"<<endl;
    for(int i=0;i<4;i++)
    {
        int sum = 0;
        for(int j=0;j<3;j++)
        {
            sum+= arr[j][i];
        }
        cout<<i<<" -> "<<sum<<endl;
    }
}

int higestrowsum(int arr[3][4])
{
    cout<<"Higest Row sum"<<endl;
    int maxi = -1;
    int row = -1;
    for(int i=0;i<3;i++)
    {
        
        int sum = 0;
        for(int j=0;j<4;j++)
        {

            sum+= arr[i][j];
        }

       if(maxi<=sum)
       {
            row = i;
            maxi=sum;
       }
    }
    cout<< row << " -> ";
    return maxi;

}

int higestsumcol(int arr[3][4])
{
    cout<<"Higest Col sum"<<endl;
    int maxi = -1;
    int col = -1;
    for(int i=0;i<4;i++)
    {
        
        int sum = 0;
        for(int j=0;j<3;j++)
        {

            sum+= arr[j][i];
        }

       if(maxi<=sum)
       {
            col = i;
            maxi=sum;
       }
    }
    cout<< col << " -> ";
    return maxi;

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

    rowsum(arr);
    colsum(arr);

    
    cout<<higestrowsum(arr)<<endl;
    cout<<higestsumcol(arr)<<endl;

    
}