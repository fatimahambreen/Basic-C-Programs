// a simple calculator .... input two integers as well as one choice
// check if choice is 0 then print sum if 1 print difference if 2 print mul if 3 division

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter two integers and a choice"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    if(c==0)
    {
        d=a+b;
        cout<<"sum"<<endl;
        cout<<d;
    }
    else if(c==1)
    {
        d=a-b;
        cout<<"dfrnc"<<endl;
        cout<<d;
    }
    else if(c==2)
    {
        d=a*b;
        cout<<"multiplication"<<endl;
        cout<<d;
    }
    else if(c==3)
{

        d=a/b;
        cout<<"division"<<endl;
        cout<<d;
}
    else{
        cout<<"wrong choice";
    }
    return 0;
    }

