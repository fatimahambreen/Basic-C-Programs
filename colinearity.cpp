#include<iostream>
using namespace std;
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float a,b,c;
    cout<<"enter the x coordinates"<<endl;
    cin>>x1;
    cin>>x2;
    cin>>x3;
    cout<<"enter the y coordinates"<<endl;
    cin>>y1;
    cin>>y2;
    cin>>y3;
    a=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    cout<<a<<endl;
    b=((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2));
    cout<<b<<endl;
    c=((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1));
    cout<<c<<endl;
    if(a+b==c||a+c==b||b+c==a)
    {
        cout<<"they are colinear"<<endl;
    }
    else
    {
        cout<<"they are non colinear"<<endl;
    }
}
