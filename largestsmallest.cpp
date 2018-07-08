#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the three numbers"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b&&a>c)
    {
        cout<<"largest number is a"<<endl;
        cout<<a<<endl;
    }
    else if(b>a&&b>c)

    {
        cout<<"largest number is b"<<endl;
        cout<<b<<endl;
    }
    else
    {
        cout<<"largest number is c"<<endl;
        cout<<c<<endl;
    }
    if(a<b&&a<c)
    {
        cout<<"smallest is a"<<endl;
        cout<<a<<endl;
    }
    else if(b<a&&b<c)
    {
        cout<<"smalllest is b"<<endl;
        cout<<b<<endl;
    }
    else
    {
        cout<<"smallest is c"<<endl;
        cout<<c<<endl;
    }
}
