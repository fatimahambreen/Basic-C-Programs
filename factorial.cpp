#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cout<<"enter a number to find factorial"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        f=f*i;

    }
    cout<<"factorial of entered number is"<<endl;
    cout<<f;
}

