#include<iostream>
using namespace std;
class hotel
{
private:
    string name;
    int roomno;
    int nod;
    float tariff;
    double calc()
    {
        double amount;
        amount=tariff*nod;
        if(amount>10000)
        {
            amount=1.05*tariff*nod;
        }
       return amount;
    }
public:
    void checkin()
    {
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"enter the roomno"<<endl;
        cin>>roomno;
        cout<<"enter the number of days uh want to avail this hotel"<<endl;
        cin>>nod;
        cout<<"enter the tariff"<<endl;
        cin>>tariff;

    }
    void checkout()
    {
        cout<<"name of customer is"<<endl;
        cout<<name<<endl;
        cout<<"room no of customer is"<<endl;
        cout<<roomno<<endl;
        cout<<"number of days for which checkedin"<<endl;
        cout<<nod<<endl;
        cout<<"amount charged for the stay"<<endl;
      double amt=  calc();
      cout<<amt; //cout<<calc();
    }

};
int main()
{
    hotel a;
    a.checkin();
    a.checkout();
}
