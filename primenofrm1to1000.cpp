#include<iostream>
using namespace std;
int main()
{
    int a=0;
for(int i=1;i<=1000;i++)
{
    a=0;
    for(int j=1;j<=i;j++)
    {
        if(i%j==0)

        {
               a++;
        }



    }
    if(a==2)
{
    cout<<i<<endl;
}
}
}
