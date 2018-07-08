#include<iostream>
using namespace std;
double area(float a,float b)
{
    double r=a*b;
 return r;
}
double area(double r)
{
    double c=3.14*r*r;
    return c;
}
int main()
{
    float a;
    float b;
    double r;
    cout<<"enter the side of rectangle and radius of circle "<<endl;
    cin>>a;
    cin>>b;
    cin>>r;
    cout<<"area of rectangle is"<<endl;
    cout<<area(a,b);

    cout<<"area of circle is"<<endl;
    cout<<area(r);

}
