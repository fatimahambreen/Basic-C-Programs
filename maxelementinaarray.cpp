//write a program to find maximum element present in a array of size 10...
#include<iostream>
using namespace std;
int main()
{

    int arr[10];
    cout<<"elements of array are"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];

    }
    int max=arr[0];
    for(int i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }

    }cout<<max<<endl;


    }


