#include<iostream>
using namespace std;
class bankaccount
{
private:
   char nameofdep[20];
   double balance=0;
public:
   double accntno;
   char typeofaccnt[10];

    void initialamount()
    {
    cout<<"enter the initial amount"<<endl;
    cin>>balance;
    cout<<"enter the ac no"<<endl;
    cin>>accntno;
    cout<<"enter the name of dep"<<endl;
    cin>>nameofdep;
    cout<<"enter the type of ac"<<endl;
    cin>>typeofaccnt;
    }
    void deposit(double deposit_amount)
    {

        balance=balance+deposit_amount;
    }
    void withdraw(double withdraw_amt)
    {
       if(balance-withdraw_amt>=0)
       {

           balance= balance-withdraw_amt;
       }
       else{
        cout<<"Insufficient balance ";
       }
    }
    void display()
    {
        cout<<"Customer details:";
        cout<<nameofdep<<endl;
        cout<<typeofaccnt<<endl;
        cout<<accntno<<endl;
        cout<<balance<<endl;
    }
};
int main()
{
    bankaccount a;
    a.initialamount();
    a.deposit(560);
    a.display();
    a.withdraw(1000);
    a.display();
}

