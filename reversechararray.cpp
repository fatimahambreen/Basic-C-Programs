#include<iostream>
using namespace std;
int main()
{
    int a=0;
    char  arr[40];
    cout<<"enter the array"<<endl;
    cin>>arr;

        for(int i=0;arr[i]!='\0';i++)
        {
            a=a+1;
        }
        for(int i=a-1;i>=0;i--)
        {
            cout<<arr[i];
        }
    }

