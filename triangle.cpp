#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    char choice;

do
{


    int a,b,c;
cout<<"enter the side a of the triangle"<<endl;
cin>>a;
cout<<"enter the side b of the triangle"<<endl;
cin>>b;
cout<<"enter the side c of the triangle"<<endl;
cin>>c;
if((a+b)>c&&(b+c)>a&&(c+a)>b)
{
    cout<<"triangle is valid"<<endl;

if(a==b&&b==c&&c==a)
{
    cout<<"triangle is equilateral triangle"<<endl;
}

else if(a==b||b==c||c==a)
{
    cout<<"triangle is isosceles triangle"<<endl;
}
else if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
{

    cout<<"triangle is right angle triangle"<<endl;
}
else if(a!=b&&b!=c&&c!=a)
{
    cout<<"triangle is scalene triangle"<<endl;
}
}
cout<<"\n want to checkmore (enter y or n) :";
cin>>choice;
}while(choice=='y');
}

