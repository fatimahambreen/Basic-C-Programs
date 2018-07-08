#include<iostream>
using namespace std;
int main()
{
    int n;
    float s=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s=s+(1.0/i);

    }
    cout<<"sum of series is"<<endl;
cout<<s;
}

