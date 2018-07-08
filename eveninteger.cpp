#include<iostream>
using namespace std;
int main()
{

    int arr[5];
    cout<<"enter 5 integer"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if (arr[i]%2==0)
        {
            cout<<"even integers are"<<endl;
            cout<<arr[i];
        }
}
}
