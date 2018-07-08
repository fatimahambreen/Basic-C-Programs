//wap to print table of a number
#include<iostream>
using namespace std;
int main()
{
    int n,multi;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<"multiplication table of entered number is"<<endl;
    for(int i=1;i<=10;i++)
    {
        multi=n*i;
        cout<<multi<<endl;
    }

}
