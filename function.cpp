#include<iostream>
using namespace std;
int division(int a,int b)
{
   /* cout<<"enter the dividend"<<endl;
    cout<<a<<endl;
    cout<<"enter the divisor"<<endl;
    cout<<b<<endl;

cout<<"quotient is"<<endl;*/
int q = a/b;
return q;

}
int main()
{
    int a;
    int b;
    int q;
    cout<<"dividend entered is"<<endl;
    cin>>a;
    cout<<"divisor entered is"<<endl;
    cin>>b;
    cout<<"quotient is"<<endl;

    q=division(a,b);
    cout<<q<<endl;

}
