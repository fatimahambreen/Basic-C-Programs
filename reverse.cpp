#include<iostream>
using namespace std;
int main()
{
    int d,n,r=0;
    cout<<"enter the number to be reversed"<<endl;
    cin>>n;
    while(n>0)
    {
       d=n%10;
       r=r*10+d;
       n=n/10;
    }
    cout<<"the reversed number is"<<endl;
    cout<<r;
}

