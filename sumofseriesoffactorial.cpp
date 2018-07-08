#include<iostream>
using namespace std;
int main()
{
    int f=1;
    int n;
    int s=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {    f=1;
        for(int j=1;j<=i;j++)
        {
            f=f*j;

        }

        s=s+f;
    }
    cout<<"sum of series of factorial is"<<endl;
    cout<<s<<endl;
}
