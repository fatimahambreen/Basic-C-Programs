#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
   /* cout<<"value of a"<<endl;
    cout<<a<<endl;
    cout<<"value of b"<endl;
    cout<<b<<endl;*/

    int temp;
    temp=a;
    a=b;
    b=temp;


}
int main()
{
    int a;
    int b;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    cout<<a<<b;
    swap(a,b);
    cout<<a<<b;

}
