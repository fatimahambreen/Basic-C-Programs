#include<iostream>
using namespace std;
class taxpayer
{
private:
    string name;
    string panno;
    float taxabincm=0;
    float tottax=0;
    void comptax()
    {
        int tax;
      cout<<"taxable income tax percent"<<endl;
      cout<<taxabincm;
      if(taxabincm<=16000)
      {
          cout<<"no tax charged"<<endl;
          tax=0;
      }
      else if(taxabincm>16000&&taxabincm<=30000)
      {
          cout<<"tax charged is 5%"<<endl;
          tax=0.05*taxabincm;
      }
      else if(taxabincm>30000&&taxabincm<=50000)
      {
          cout<<"tax charged is 10%"<<endl;
          tax=0.10*taxabincm;
      }
      else if(taxabincm>50000)
      {
          cout<<"tax charged is 15%"<<endl;
          tax=(taxabincm*15)/100;
          }
          cout<<"tx"<<tax;
          tottax=tax;

    }
public:
    void intax()
    {
        cout<<"enter your name"<<endl;
        cin>>name;
        cout<<"enter your pan number"<<endl;
        cin>>panno;
        cout<<"enter your taxable income"<<endl;
        cin>>taxabincm;

        comptax();

    }
    void outtax()
    {
        cout<<"name is"<<endl;
        cout<<name<<endl;
        cout<<"pan number is"<<endl;
        cout<<panno<<endl;
        cout<<"taxable income is"<<endl;
        cout<<taxabincm<<endl;
        cout<<"total tax needed to be paid is"<<endl;
        cout<<tottax<<endl;
    }
};

int main()
{
    taxpayer a;
    a.intax();
    a.outtax();
}


