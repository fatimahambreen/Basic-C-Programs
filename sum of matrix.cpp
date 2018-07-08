#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    double sum=0;
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"sum of elements of array are"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    cout<<sum<<endl;
}
