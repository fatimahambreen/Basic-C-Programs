#include<iostream>
using namespace std;
int main()
{
    int n;
    int s=0;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            s=s+i;
        }
    }
    cout<<"sum is"<<endl;
    cout<<s<<endl;
}

