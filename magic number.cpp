#include<iostream>
using namespace std;
int main()
{
int n,d;
int s=0;
cout<<"enter a number"<<endl;
cin>>n;

while(1)
{


while(n>0)
{
    d=n%10;
    s=s+d;
    n=n/10;
}
cout<<s<<endl;
if(s>=0&&s<=9)
{
    cout<<"single digit number"<<endl;
    break;
}
else
    {
        n=s;
        s=0;
    }
}
if(s==1)
{
    cout<<"it is a magic number"<<endl;

}
else
{
    cout<<"not a magic number"<<endl;
}

}

