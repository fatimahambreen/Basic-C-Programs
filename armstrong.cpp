#include<iostream>
using namespace std;
int main()
{
    int n,d,s=0,num;
    cout<<"enter a number"<<endl;
    cin>>n;
    num=n;
    while(n>0)
    {
        d=n%10;
        s=s+(d*d*d);
        n=n/10;
    }

    if(s==num)
    {
        cout<<"it is an armstrong number"<<endl;
    }
    else
    {
        cout<<"not armstrong"<<endl;
    }
    }

