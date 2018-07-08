#include<iostream>
using namespace std;
int main()
{
    char arr[20];
    cout<<"enter the desired array"<<endl;
    cin>>arr;
    cout<<"entered character in upper case"<<endl;
    for(int i=0;arr[i]!='\0';i++)
    {
        arr[i]=arr[i]-32;

    cout<<arr[i];
}
}
