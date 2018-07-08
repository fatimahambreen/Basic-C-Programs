#include<iostream>
using namespace std;
int main()
{
    string name[3];
    float run[3];
    float innings[3];
    float timesnotout[3];
    float sum[3]={0,0,0};
    float avrg[3]={0,0,0};
    cout<<"name is"<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>name[i];
    }
    cout<<"runs scored are"<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>run[i];
    }
    for(int i=0;i<3;i++)
    {
    sum[0]=sum[0]+run[i];
    }
    avrg[0]=sum[0]/3;
    cout<<"average is"<<endl;
    cout<<avrg[0]<<endl;
    cout<<"innings are"<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>innings[i];
    }
  for(int i=0;i<3;i++)
    {
    sum[1]=sum[1]+innings[i];
    }
    avrg[1]=sum[1]/3;
    cout<<"average is"<<endl;
    cout<<avrg[1]<<endl;
cout<<"times not out"<<endl;
for(int i=0;i<3;i++)
    {
        cin>>timesnotout[i];
    }

  for(int i=0;i<3;i++)
    {
    sum[2]=sum[2]+timesnotout[i];
    }
    avrg[2]=sum[2]/3;
    cout<<"average is"<<endl;
    cout<<avrg[2]<<endl;
cout<<"sum are"<<endl;
for(int i=0;i<3;i++)
{
    cout<<sum[i]<<endl;
    cout<<name[i]<<endl;
}

}
