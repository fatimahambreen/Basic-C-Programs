#include<iostream>
using namespace std;
int main()
{
    int n,d,s=0;
    cout<<"enter the digit"<<endl;
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        n=n/10;

    }
    cout<<"sum of digits of entered integer is"<<endl;
    cout<<s;
}
