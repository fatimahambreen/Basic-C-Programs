#include<iostream>
using namespace std;
int main()
{
    int noh;
    float bucks;
    float robbed;
    cout<<"enter the number of houses in the street "<<endl;
    cin>>noh;
    cout<<"enter the money in each house"<<endl;
    cin>>bucks;
    if(noh%2==0)
    {
        robbed=(noh/2)*bucks;
    }
else if(noh%2!=0)
{
    robbed=((noh/2)+1)*bucks;
}
cout<<"maximum money robbed by the thief"<<endl;
cout<<robbed<<endl;

}
