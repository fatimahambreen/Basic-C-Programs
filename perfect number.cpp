#include<iostream>
using namespace std;
int main()
{

int n;
int s=0;
cout<<"enter a number"<<endl;
cin>>n;
for(int i=1;i<n;i++)
{
    if(n%i==0)
    {
     s=s+i;
    }
}
cout<<s<<endl;
if(s==n)
{
    cout<<"the entered number is a perfect number "<<endl;

}
else
    {
        cout<<"not a perfect number"<<endl;
    }

}
