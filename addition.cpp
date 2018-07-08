#include<iostream>
using namespace std;
void addition(int a,int b)
{
cout<<"two numbers entered are:"<<endl;
cout<<a<<endl;
cout<<b<<endl;
int c=a+b;
cout<<"sum of two numbers are:"<<endl;
cout<<c;
}
int main()
{
int a;
int b;
int c;

cout<<"value of first entered number is"<<endl;
cin>>a;
cout<<"the value of second entered number is"<<endl;
cin>>b;
c=a+b;
cout<<"the sum of two numbers are"<<endl;
cout<<c;
addition(45,23);
}
