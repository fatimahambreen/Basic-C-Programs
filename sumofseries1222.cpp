#include<iostream>
using namespace std;
int main()
{
    double s=0;
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
     cout<<"sum of series is"<<endl;
    for(int i=12;i<=n;i+=10)
    {
        s=s+i;
    }
    cout<<s<<endl;
}
