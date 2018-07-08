#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int m;
    int n;
    cout<<"enter the array"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the first index of the array"<<endl;
    cin>>m;
    cout<<"enter the last index of the array"<<endl;
    cin>>n;
    cout<<"subarray is"<<endl;
        for(int j=m;j<=n;j++)
        {
            cout<<arr[j]<<",";
        }



}
