#include<iostream>
using namespace std;
int main()
{
    double u,c,fine;
    string name;
    cout<<"enter names of user"<<endl;
    cin>>name;
    cout<<"enter units consumed"<<endl;
    cin>>u;
    if(u<=100)
    {
        c=50+(0.60*u);

    }
    else if(u<=300&&u>=100)
    {
        c=50+(0.80*u);
    }
    else if(u>300)
    {
        c=50+(0.90*u);
    }

    if(c>300)
    {
    fine=0.15*c;
    c=c+fine;
    }
    cout<<"names of user and charge is"<<endl;
    cout<<name<<endl;
    cout<<c;
}
