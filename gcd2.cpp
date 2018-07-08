#include<iostream>
using namespace std;
int main()
{
    int m;
    int n;
    int gcd;
    int r;
    int q;
    cin>>m>>n;
    if(m>n)
    {


    while(1)
    {


    if(m%n==0)
    {
        gcd=n;
        cout<<"gcd is"<<gcd<<endl;
        break;
    }
    else
    {
        r=m%n;
        q=n%r;
        //cout<<"remainder is"<<r<<endl;
       // cout<<"quotient is"<<q<<endl;
    }
    if(q==0)
    {
        gcd=r;
        cout<<"GCD is"<<gcd<<endl;
        break;
    }
    m=r;
    n=q;
    }
    }
    else
    {
        while(1)
    {


    if(n%m==0)
    {
        gcd=m;
        cout<<"gcd is"<<gcd<<endl;
        break;
    }
    else
    {
        r=n%m;
        q=m%r;
        //cout<<"remainder is"<<r<<endl;
       // cout<<"quotient is"<<q<<endl;
    }
    if(q==0)
    {
        gcd=r;
        cout<<"GCD is"<<gcd<<endl;
        break;
    }
    n=r;
    m=q;
    }

    }

}
