#include<iostream>
using namespace std;
class DM;
class DB
{
    public:
    double dist;
    cout<<"enter the distance in feet and inches"<<endl;
    void input(double d)
    friend void addition(DB,DM)
    void display();
};
class DM
{
    public:
    double dist2;
    cout<<"enter the distance in metres and centimetres"<<endl;
    void input(double d)
    friend void addition(DB,DM)
    void display();
};
void DB::display()
{
    cout<<"distance="<<dist<<"meter and"<<dist*100<<"centimeter";
}
void DM::display()
{
    cout<<"distance="<<dist2<<"feet and"<<dist2*12<<"inches";
}
void addition(DB a,DM b)
{
float addition;
addition=a.dist+b.dist2
