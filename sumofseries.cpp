#include<iostream>
using namespace std;
int main()
{
    int n;
    int s=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the sum of series"<<endl;
    for(int i=0;i<=n;i++)
    {
        s=s+i;
    }
    cout<<s<<endl;
}
