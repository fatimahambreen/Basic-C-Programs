#include<iostream>
using namespace std;
int main()
{
    char arr[50];
    cout<<"enter character"<<endl;
    cin>>arr;
    int digit=0;
    int uppercase=0;
    int lowercase=0;
    for(int i=0;arr[i]!='\0';i++)
    {
         if(arr[i]>='A'&&arr[i]<='Z')
         {
            uppercase++;
        }
        else if(arr[i]>='a'&&arr[i]<='z')
    {
        lowercase++;

    }
    else if(arr[i]>='0'&&arr[i]<='9') //0, '0'
    {
        digit++;
    }
}
cout<<"uppercase is"<<endl;
cout<<uppercase<<endl;
cout<<"lowercase is"<<endl;
cout<<lowercase<<endl;
cout<<"digit is"<<endl;
cout<<digit<<endl;

}
