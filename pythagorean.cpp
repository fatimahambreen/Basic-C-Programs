#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cout<<"enter the three sides"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    d=a*a;
    e=b*b;
    f=c*c;
    if((d+e)==f)
    {
        cout<<"pythagorean triple"<<endl;

    }
    else if((e+f)==d)
    {
        cout<<"pythagorean triple"<<endl;
    }
    else if((f+d)==e)
    {
        cout<<"pythagorean triple"<<endl;
    }
    else
    {
        cout<<"not a pythagorean triple"<<endl;
    }
}
