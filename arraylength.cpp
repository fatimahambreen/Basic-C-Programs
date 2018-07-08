#include<iostream>
using namespace std;
int main()
{
    int a=0;
    char arr[20];
    cout<<"enter the character "<<endl;
    cin>>arr;
    for(int i=0;arr[i]!='\0';i++)
    {
        a=a+1;
    }
    cout<<"size of entered array is"<<endl;
    cout<<a<<endl;
}
