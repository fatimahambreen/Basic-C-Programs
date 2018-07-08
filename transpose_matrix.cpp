#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int transpose[3][3];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
     cout<<"print the elements of array"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"transpose of array is"<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        transpose[j][i]=arr[i][j];
         }
}
cout<<"print transpose"<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
}
}
