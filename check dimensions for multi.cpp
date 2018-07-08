#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter the dimensions of first matrix"<<endl;
    cout<<"enter the row"<<endl;
    cin>>a;
    cout<<"enter the column"<<endl;
    cin>>b;
     cout<<"enter the dimensions of second matrix"<<endl;
    cout<<"enter the row"<<endl;
    cin>>c;
    cout<<"enter the column"<<endl;
    cin>>d;
    if(b==c)
    {
        cout<<"multiplication of both the matrix is possible"<<endl;
    }
    else
    {
        cout<<"multiplication not possible"<<endl;
    }

}
