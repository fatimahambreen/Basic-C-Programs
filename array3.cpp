#include<iostream>
using namespace std;
int main()
{
    char arr[7];
    char a;
    int found=0;
    cout<<"enter the character array"<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the character you want to search in the array"<<endl;
    cin>>a;
    for(int i=0;i<7;i++)
    {
        if(arr[i]==a)
            found=1;


    }
    if(found==1)
    {
        cout<<"character entered is present in the array"<<endl;
    }
    else
        {
            cout<<"character entered is not present"<<endl;
        }
    }


