#include<iostream>
using namespace std;
int main()
{

    int arr[10];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
for(int i=0;i<10;i++)
{
    if(max<arr[i])

    {
        max=arr[i];
    }

}
int secondmax=arr[1];
for(int i=0;i<10;i++)
{
    if(secondmax<arr[i]&&arr[i]!=max) //see your seocnd maximum  write previous one here ...  u have done correctly just one thing is wrong ya try..kya??
    {
        secondmax=arr[i]; //hua ?haan..smajh me aaya..haa good one bro :) ghanta  tkuoh nhi kya ?khudse toh nhi hua kya good are wo ek case hai..usme sab faste hain tension nhi ..ok new file ..
    }
}cout<<"second maxm element is"<<endl;
cout<<secondmax<<endl;
}
