#include<iostream>
using namespace std;
int main()
{
    char arr[20]; // this u have to modify....humko qstn sahi se nhi samajh aaya...ok i will tell dont worry
    int goal=0;
    int no_goal=0;
    int foul=0;
    cout<<"enter the character"<<endl;
    cin>>arr;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='0')
        {
            no_goal++;
        }
        else if(arr[i]=='1')
        {

        }
        else if(arr[i]=='2'&&arr[i+1]=='1')
        {

                    goal++;
        }
    }
    cout<<"number of goals scored during a penalty  by ishaan is"<<endl;
    cout<<goal;
}
