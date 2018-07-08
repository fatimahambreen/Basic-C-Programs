#include<iostream>
using namespace std;
int main()
{
    int juvenile[5]={11,16,15,17,14};
    int adult[5]={17,22,20,18,19};
    int age;
    int s1=0;
    int s2=0;
    int avg1=0;
    int avg2=0;
    int juv;
    int adu;
    cout<<"enter your age"<<endl;
    cin>>age;
    for(int i=0;i<5;i++)
    {
        s1=s1+juvenile[i];
    }
    avg1=s1/5;
    for(int i=0;i<5;i++)
    {
        s2=s2+adult[i];
    }
    avg2=s2/5;

    juv=(avg1-age)*(avg1-age);
    adu=(avg2-age)*(avg2-age);

    if(juv<adu)
    {
        cout<<"user is juvenile"<<endl;
    }
    else
    {
        cout<<"user is adult"<<endl;
    }

}
