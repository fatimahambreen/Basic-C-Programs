#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    char name[100];
    char number[20];
    int age;
    int filmchoice;
    int price;
    char row;
    string filmname;
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"enter your age"<<endl;
    cin>>age;
    cout<<"enter your phone number"<<endl;
    cin>>number;
    cout<<"four films will be shown at 5pm and they are"<<endl;
    cout<<"first film is PARI to be displayed on screen1 pricing Rs 200 per seat"<<endl;
    cout<<"second film is OCTOBER to be displayed on screen2 pricing Rs100 per seat"<<endl;
    cout<<"third film is NEWTON to be displayed on screen3 pricing Rs500 per seat"<<endl;
    cout<<"fourth film is RAAZI to be displayed on screen4 pricing Rs700 per seat"<<endl;
    cout<<"enter your film choice as per your interest and price accordingly"<<endl;
    cin>>filmchoice;
    cout<<"there are four rows named as A,B,C,D"<<endl;
    cout<<"enter your row"<<endl;
    cin>>row;
    switch(filmchoice)
    {
        case 1:price=200;
            filmname="PARI";
        cout<<"choice is PARI"<<endl;
        break;
        case 2:price=100;
             filmname="OCTOBER";
        cout<<"choice is OCTOBER"<<endl;
        break;
        case 3:price=500;
              filmname="NEWTON";
        cout<<"choice is NEWTON"<<endl;
        break;
        case 4:price=700;
             filmname="RAAZI";
        cout<<"choice is RAAZI"<<endl;
        break;
    }
    system("cls");
    cout<<"SELF TICKETING PORTAL:"<<endl;
    cout<<"NAME OF USER IS:"<<endl;
    cout<<name<<endl;
    cout<<"AGE OF USER IS:"<<endl;
    cout<<age<<endl;
    cout<<"PHONE NUMBER OF USER IS:"<<endl;
    cout<<number<<endl;
    cout<<"FILM CHOICE OF USER IS:"<<endl;
    cout<<filmchoice<<endl;
    cout<<filmname<<endl;
    cout<<"PRICE OF TICKET AS PER CHOICE OF MOVIE IS:"<<endl;
    cout<<price<<endl;
    cout<<"ROW NO OF USER IS:"<<endl;
    cout<<row<<endl;
    cout<<"THANK YOU"<<endl;


}
