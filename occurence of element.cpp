#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int a;
    int c=0;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
   cout<<"enter the element whose occurence needs to be known"<<endl;
   cin>>a;
   cout<<"no. of times element occured is"<<endl;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==a)
        {
            c++;
        }
    }
    cout<<c;
}

