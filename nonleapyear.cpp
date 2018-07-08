#include<iostream>
using namespace std;
int main()
{
    int month;
    int year;
    cout<<"enter the month"<<endl;
    cin>>month;
    cout<<"enter the year"<<endl;
    cin>>year;
    if(year%4==0)
    {
        cout<<"invalid year because leap year"<<endl;
    }
    else if((month>=1&&month<=12)&&(year%4!=0))
    {
        cout<<"valid date"<<endl;
        cout<<"valid month is"<<month<<"valid year is"<<year<<endl;
    }

}
