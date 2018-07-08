#include<iostream>
using namespace std;

int main()
{
    int n;
    int r;
    int pr=0;
    int f1=1;
    int f2=1;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the vslue of r"<<endl;
    cin>>r;
    for(int i=1;i<=n;i++)
    {
        f1=f1*i;

    }
    for(int i=1;i<=(n-r);i++)
    {
        f2=f2*i;
    }
    cout<<"value of permutation is"<<endl;
   pr=f1/f2;
   cout<<pr<<endl;

}

