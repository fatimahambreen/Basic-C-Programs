// Write a program to input three integers and find maximum number. Got ?yeah soc hne do ok so u first send the flow chart ohk
#include<iostream>
using namespace std;
int main()
{
int a,b,c,max;
cout<<"enter the three integers"<<endl;
cin>>a;
cin>>b;
cin>>c;
if(a>b&&a>c)
{
max=a;
cout<<"max is a"<<endl;
cout<<max;
}
else if(b>a&&b>c)
{
max=b;
cout<<"max is b"<<endl;
cout<<max;
}
else
{
    max=c;
cout<<"max is c"<<endl;
cout<<max;
}
return 0;
}
