#include<iostream>
using namespace std;
int main()
{
    int n,s1=0,s2=0,c=0;
    cout<<"enter the integer"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++) //here no need to start the loop from zero u can start with one ...as 0+s=s
    {
        s1=s1+i;//samajh me aayaa
    }
    cout<<s1<<endl;

cout<<"enter values of n-1"<<endl;
for(int i=1;i<=n-1;i++)
{

    int temporary_variable;//yeh wala nhi aaya
    cin>>temporary_variable;
     s2=s2+temporary_variable;
}
cout<<s2<<endl;

    c=s1-s2;
    cout<<"missing number is"<<endl; //done ?nnhi aa rha h
    cout<<c;

}
