#include<iostream>
using namespace std;
int main()
{
    int i,j,s;
    for(i=1;i<=4;i++)
    {
        for(s=1;s<=4-i;s++)
        {
            cout<<" ";
        }
        for (j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
