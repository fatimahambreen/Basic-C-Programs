#include<iostream>
using namespace std;
int main()
{

    float run[5];
    float sum,average;
    cout<<"enter the runs scored"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>run[i];


    }

        sum=0;
        for(int i=0;i<5;i++)
        {


        sum=sum+run[i];
        }
        average=sum/5;
        cout<<"avrg is"<<endl;
        cout<<average;
 cout<<"runs scred  are"<<endl;
 for(int i=0;i<5;i++)
 {


 cout<<run[i];

}
}
