#include<iostream>
using namespace std;
int main()
{

        int x=10,y=20;
        //without ainnie constant
        /*int *a= &x;
        cout<<a<<endl;
        cout<<&x<<endl;
        cout<<*a<<endl;
         a= &y;
        cout<<a<<endl;
        cout<<&y<<endl;
        cout<<*a<<endl;
        cout<<&a<<endl;*/
        int * const a= &x;
        *a=45;
        a=&y;
        cout<<x;
}
