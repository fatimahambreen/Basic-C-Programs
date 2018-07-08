#include<iostream>
using namespace std;
int factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{

    int n,r;
    cout<<"Enter the value of n and r :";

    cin>>n>>r;
    int p = factorial(n)/factorial(n-r);
    cout<<p<<endl;


}
