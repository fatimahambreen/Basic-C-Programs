#include<iostream>
using namespace std;
class bank
{
public:
    char name[30];
    char typeac[15];
    int acntno;
    double balance;
    void initial_info()
    {
        cout<<"enter the name of the customer"<<endl;
        cin>>name;
        cout<<"enter the type of account you hold"<<endl;
        cin>>typeac;
        cout<<"enter your account number "<<endl;
        cin>>acntno;
        cout<<"enter your balance"<<endl;
        cin>>balance;
    }
    void deposit()
    {
        double dep_amnt;
        cout<<"enter the amount u need to deposit"<<endl;
        cin>>dep_amnt;
        balance=balance+dep_amnt;
    }
    void withdraw()
    {
        double wthdrw_amnt;
        cout<<"enter the amnt u need to withdraw"<<endl;
        cin>>wthdrw_amnt;
        if(wthdrw_amnt<=balance)
        {
            balance=balance-wthdrw_amnt;
        cout<<"balance is"<<balance<<endl;
        }
        else
        {
            cout<<"insufficient amount"<<endl;
        }
    }
    void display()
    {
        cout<<"CUSTOMER DETAILS ARE AS UNDER"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"type of account:"<<typeac<<endl;
        cout<<"account number:"<<acntno<<endl;
        cout<<"balance:"<<balance<<endl;
        cout<<"______________________________"<<endl;
    }
};
int main()
{
    bank stuff[10];
    for(int i=0;i<10;i++)
    {
        cout<<"customer"<<i<<endl;
        stuff[i].initial_info();
        stuff[i].deposit();
        stuff[i].withdraw();
        stuff[i].display();
    }

}



