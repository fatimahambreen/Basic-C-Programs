#include<iostream>
using namespace std;
void pallindrome(int a)
{
 int d,r=0,num ;
 num=a;
 while(a>0)
 {
     d=a%10;
     r=r*10+d;
     a=a/10;
      }
      if(num==r)
      {
          cout<<"entered number is a pallindrome "<<endl;
      }
      else
        {
            cout<<"not a pallindrome"<<endl;
        }
}
void armstrong(int a)
{
          int d;
          int num=a;
          float s=0;
          while(a>0)
          {
          d=a%10;
          s=s+(d*d*d);
          a=a/10;
          }
          if(s==num)
          {
              cout<<"it is an armstrong number"<<endl;
          }
          else
          {
              cout<<"not an armstrong number"<<endl;

          }
}
      void prime(int a)
      {
          int c=0;
          for(int i=1;i<=a;i++)
          {
              if(a%i==0)
              {

                  c++;
              }
          }
          if(c==2)
          {
              cout<<"it is a prime number"<<endl;
          }
          else
            {
                cout<<"not a prime number"<<endl;
            }
          }
          void magic(int a)
          {
              int d;
              int s=0;
              while(1)
              {


              while(a>0)
{
    d=a%10;
    s=s+d;
    a=a/10;
}
if(s>=0&&s<=9)
{
    cout<<"single digit number"<<endl;
    break;
}
else
    {
        a=s;
        s=0;
    }
}
if(s==1)
{
    cout<<"it is a magic number"<<endl;
}
else
{
    cout<<"not a magic number"<<endl;
}
}
void perfect(int a)
          {
              int s=0;
for(int i=1;i<a;i++)
{
    if(a%i==0)
    {
     s=s+i;
    }
}
cout<<s<<endl;
if(s==a)
{
    cout<<"the entered number is a perfect number "<<endl;

}
else
    {
        cout<<"not a perfect number"<<endl;
    }
}
          int main()
          {
              int choice;
              char user_c;
              int n;
              do
              {


              cout<<"enter the number"<<endl;
              cin>>n;
              cout<<"we can check the input number for five functions"<<endl;
              cout<<"press 1 for pallindrome"<<endl;
              cout<<"press 2 for armstrong"<<endl;
              cout<<"press 3 for prime"<<endl;
              cout<<"press 4 for magic"<<endl;
              cout<<"press 5 for perfect"<<endl;
              cout<<"enter the choice from 1 to 5"<<endl;
              cin>>choice;
              switch(choice)
              {
              case 1:pallindrome(n);
                      break;

              case 2:armstrong(n);
              {
                  break;
              }
              case 3:prime(n);
              {
                  break;
              }
              case 4:magic(n);
              {
                  break;
              }
              case 5:perfect(n);
            {
                break;
            }
              }
              cout<<"enter y to continue :";
              cin>>user_c;
              }while(user_c=='y');
          }


