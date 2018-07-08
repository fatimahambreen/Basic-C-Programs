#include<iostream>
using namespace std;
int main()
{
    int arr1[2][2];
    int arr2[2][2];
    int sub[2][2];
    cout<<"enter the elements of arr1"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr1[i][j];
        }
    }
     cout<<"enter the elements of arr2"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"subtraction of arr1 and arr2 is"<<endl;//
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sub[i][j]=arr1[i][j]-arr2[i][j];
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }
}

