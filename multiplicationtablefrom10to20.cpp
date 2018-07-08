#include<iostream>
using namespace std;
int main()
{
   int multi;
    cout<<"multiplication table from 10 to 20 are"<<endl;
    for(int n=10;n<=20;n++)
    {
        cout<<"-----------------------------------"<<endl;
        cout<<"Table of number :"<<n<<endl;
        cout<<"-----------------------------------"<<endl;

        for(int i=1;i<=10;i++)
        {
            multi=n*i;
            cout<<multi<<endl;

        }

    }

}
