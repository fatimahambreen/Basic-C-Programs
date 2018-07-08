#include<iostream>
using namespace std;
int main()
{
    int a;
    int arr[5];
    int found=0;
    cout<<"enter the array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number"<<endl;
    cin>>a;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==a)
        {
            found=1;
            break;
        }

    }
    if(found==1)
    {

        cout<<"number found !!";
    }
    else{
        cout<<"number not found ||";
    }
}
