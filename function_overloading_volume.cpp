//wap to make a menu based volume calculator based on user choice..it will compute the volume of a cube or cuboid.....use function overloading
#include<iostream>
using namespace std;
double volume(int a)
{
    double vol=a*a*a;
    return vol;
}
double volume(int l,int b,int h)
{
    double volm=l*b*h;
    return volm;
}
int main()
{
while(1)
{
    int a,l,b,h;
    cout<<"VOLUME CALCULATOR"<<endl;
    cout<<"we can compute volume of cube and cuboid"<<endl;


    cout<<"enter the side of cube"<<endl;
    cin>>a;
    cout<<"enter the aides of cuboid"<<endl;
    cin>>l;
    cin>>b;
    cin>>h;
    cout<<"for calculating the volume of cube enter 1"<<endl;
    cout<<"for calculating the volume of cuboid enter 2"<<endl;
     cout<<"enter your choice"<<endl;
    int choice;
    cin>>choice;

    switch(choice)
    {
        case 1:cout<<"volume of cube is"<<endl;
  {
       cout<<volume(a);
  }
  break;
  case 2:cout<<"volume of cuboid is"<<endl;
  {
        cout<<volume(l,b,h);
  }
  break;
    }
  char ch;
  cout<<"\n want more :";
  cin>>ch;
  if(ch!='y')
    break;

}



}
