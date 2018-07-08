#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"printing the boundary elements"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==0||i==2||j==0||j==2)
            {
                cout<<arr[i][j]<<" ";
            }
            else
                cout<<" ";

        }
        cout<<endl;

    }
}
