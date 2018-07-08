#include<iostream>
using namespace std;
int main()
{
    int m;
    int n;
    int gcd;
    cout<<"enter two numbers:"<<endl;
    cin>>m;
    cin>>n;
   for(int i=1;i<m&&i<n;i++)
   {
       if(m%i==0&&n%i==0)
       {
           gcd=i;
       }}
       cout<<"gcd is"<<gcd<<endl;
   }
