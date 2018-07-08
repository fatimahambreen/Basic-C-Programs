#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=0;
    int c=1;
    int d;
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
    cout<<"tribonacci series is"<<endl;
    cout<<d<<endl;

}
