// write a program in c++ to check given input number is a valid age or not
#include<iostream>
using namespace std;
int main()
{


    int a;
    cout<<"enter the age"<<endl;
    cin>>a;
    if(a>=1&&a<=80)
    {
        cout<<"entered age is a valid age"<<endl;

    }
    else
        {
        cout<<"entered age is invalid";
    }
}
