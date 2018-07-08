#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    double x1;
    double x2;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"enter the value of c"<<endl;
    cin>>c;
    x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);

     x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
     cout<<"the value of x1 is"<<endl;
     cout<<x1<<endl;
     cout<<"the value of x2 is"<<endl;
     cout<<x2<<endl;


}
