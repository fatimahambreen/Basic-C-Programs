#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    double s=0;
    double a=-1;
    double b=5;
     cout<<"enter the value of n"<<endl;
     cin>>n;
    // cout<<"enter the value of m"<<endl;//2/9-5/13+8/17 thoda galat bnyai hp...acha thik h...kya ? smaodmiajh gye galat h...modify kar logi na...nhi
     //hm smjh denge tab....haan...ok bta denge ye bhi..thik h baaki dekho
   //  cin>>m;
  for(int i=1;i<=n;i++)
  {
      if(i%2==0)
      {

          s-=((a+3)/(b+4));
      }
      else
      {

    s-=((a+3)/(b+4));
      }

  }





    /* for(int a=2;a<=n;a+=3)
     {
         for(int b=9;b<=m;b+=4)
         {
         if(a%2==0)
         {   cout<<((float)a)/b;
             s=s+(a/b);
         }
         else
         {
             s=s-((float)a/b);
         }
     }
     }*/
     cout<<"sum of series is"<<endl;
     cout<<s<<endl;


}
