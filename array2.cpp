#include<iostream>
using namespace std;
int main()
{
    int a[4];
    int b[4];
    int flag=0;
    cout<<"enter the elements of array 1"<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the elements of array 2"<<endl;
    for(int j=0;j<4;j++)
    {
        cin>>b[j];
    }
 for(int i=0;i<4;i++)
 {

    if(a[i]==b[i])
        flag=1;
        else
            flag=0;
        break;

 }
if(flag==1)

    cout<<"identical"<<endl;

else

    cout<<"not identical"<<endl;

}
