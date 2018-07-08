#include<iostream>
using namespace std;
int main()
{
    int n;
    int a=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
for(int i=1;i<=n;i++) // hnt liya kahin se ? ya khud se ho gya....kaahe???
{
 if(n%i==0)
 {
     a++;
 }

}
if(a==2)
{
cout<<"it is a prime number"<<endl;
}
else
{
    cout<<"number is not prime"<<endl;
}
}


