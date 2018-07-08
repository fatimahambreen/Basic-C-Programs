#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"enter the number whose factor is to be found"<<endl;
cin>>n;
 cout<<"factors  of number entered are"<<endl;

for(int i=1;i<n;i++)
{
    if(n%i==0)
    {

 cout<<i<<endl;
    }

}
}
