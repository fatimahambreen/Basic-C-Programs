#include<iostream>
using namespace std;
int main()
{
    int n;
    int r=0;
    int d;
    int a;
      cout<<"enter the number"<<endl;
            cin>>n;
      while(n>0)
      {
          d=n%10;
          r=r*10+d;
           n=n/10;
      }
while(r>0)
{


      a=r%10;
      switch(a)
      {
          case 0:cout<<"zero"<<endl;
          break;
          case 1:cout<<"one"<<endl;
          break;
          case 2:cout<<"two"<<endl;
          break;
          case 3:cout<<"three"<<endl;
          break;
          case 4:cout<<"four"<<endl;
          break;
          case 5:cout<<"five"<<endl;
          break;
          case 6:cout<<"six"<<endl;
          break;
          case 7:cout<<"seven"<<endl;
          break;
          case 8:cout<<"eight"<<endl;
          break;
          case 9:cout<<"nine"<<endl;
          break;

      }   cout<<a<<endl;
      r=r/10;
}
}
