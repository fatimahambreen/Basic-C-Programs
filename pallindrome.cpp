#include<iostream>
using namespace std;
int main()
{
    int n,d,r=0,num;
    cout<<"enter an integer"<<endl;
    cin>>n;
    num=n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;

    }
    if(num==r)
    {
        cout<<"no is pallindrome"<<endl;

    }
    else
    {
        cout<<"not pallindrome"<<endl;
    }
}
