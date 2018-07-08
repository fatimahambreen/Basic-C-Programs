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
int combination(int n,int r)
{
    int c;
    c=factorial(n)/(factorial(n-r)*factorial(r));
    return c;
}
int main()
{
    for(int i=0;i<=5;i++)
    {
        for(int k=0;k<=4-i;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}


