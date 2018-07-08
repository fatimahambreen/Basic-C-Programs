#include<iostream>
using namespace std;
int main()
{
    int m;
    int n;
    int gcd;
    double lcm;
    cout<<"enter the first number "<<endl;
    cin>>m;
    cout<<"enter the second number"<<endl;
    cin>>n;
for(int i=1;i<=m&&i<=n;i++)
{
    if(m%i==0&&n%i==0)
    {
        gcd=i;
    }
}

lcm=((m*n)/gcd);
cout<<"lcm of entered number is "<<endl;
cout<<lcm<<endl;
}
