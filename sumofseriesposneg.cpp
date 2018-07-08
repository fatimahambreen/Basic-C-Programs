#include<iostream>
using namespace std;
int main()
{
    int s=0;
    int n;
   cout<<" enter the value of n"<<endl;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       if(i%2!=0)
       {
           s=s+i;
       }
       else
       {
           s=s-i;
       }
   }
   cout<<"sum of series is"<<endl;//series kaachi...are kaun sa series ke liye likhi ho -2+3-4+5-6 ok
   cout<<s<<endl;
}
