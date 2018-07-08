#include<iostream>
using namespace std;

    void table(int a)
    {
        int multi;

         for(int i=1;i<=10;i++)
    {
        multi=a*i;
        cout<<multi<<endl;
    }

    }
    void factorial(int a)
    {
        int f=1;
           for(int i=1;i<=a;i++)
    {
        f=f*i;

    }

    cout<<f<<endl;
    }
    int main()
    {
        for(int i=1;i<=5;i++)
        {

            table(i);cout<<endl;
            factorial(i);
            cout<<endl;
        }
    }
