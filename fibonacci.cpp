#include<iostream>
using namespace std;
int main ()
{
    int a=0;
    int b=1;
    int d;
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    d=a+b;//wait ammi h...nhi samjhe kya bole...... i will tell on call..wait 2 min... check others
    a=b;
    b=d;
    }
    cout<<"fibonacci series is"<<endl;
    cout<<d<<endl;
}
