//suppose there is a shopping mall where three items are available like item1 item2 item3..
//you have to design an application for billing system where user will be asked to enter his name and number after that which item he want to buy
//depending upon his choice generate final bill... cost of items take as per your AMIRIYAT :)
#include<iostream>
using namespace std;
int main()
{
    int itemchoice;
    char n[11];
    char name[100];
    int cost;
    cout<<"enter name"<<endl;
    cin>>name;
    cout<<"enter phone number"<<endl;
    cin>>n;
    cout<<"three items are available and they are labelled as x1,x2,x3"<<endl;
    cout<<"price of x1=Rs 500"<<endl;
    cout<<"price of x2=Rs 700"<<endl;
    cout<<"price of x3=Rs 1000"<<endl;
    cout<<"please enter your choice of item according to there prices"<<endl;
    cin>>itemchoice;
    //cout<<"\n Costbefore:"<<cost;//
    switch(itemchoice)
    {
        case 1:cost=500;
        cout<<"customer has entered choice x1 which costs Rs 500"<<endl;
        break;
        case 2:cost=700;
        cout<<"customer wants to buy the item x2 which costs Rs 700"<<endl;
        break;
        case 3:cost=1000;
        cout<<"customer is inclined to purchase item x3 which costs Rs 1000"<<endl;
        break;

    }
    cout<<"BILLING DETAILS ARE:"<<endl;
    cout<<"NAME OF CUSTOMER IS:"<<endl;
    cout<<name<<endl;
    cout<<"PHONE NUMBER OF CUSTOMER IS:"<<endl;
    cout<<n<<endl;
    cout<<"ITEM PURCHASED AS PER CUSTOMER'S CHOICE IS:"<<endl;
    cout<<itemchoice<<endl;
    cout<<"COST OF ITEM IS:"<<endl;
    cout<<cost<<endl;


}
