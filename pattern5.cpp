#include<iostream>
using namespace std;
int main()
{
    int i,j,s;
    for(int i=1;i<=5;i++)
    {
        for(int s=1;s<=5-i;s++)
        {

            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
