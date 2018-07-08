#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int c=0;
    int d=0;
    int e=0;
    int f=0;
    int g=0;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"occurence of each element in the array is"<<endl;
    for(int i=0;i<5;i++)
    {
        if(arr[0]==arr[i])
        {
            c++;
        }

         if(arr[1]==arr[i])
        {
            d++;
        }

          if(arr[2]==arr[i])
        {
            e++;
        }

          if(arr[3]==arr[i])
        {
            f++;
        }

        if(arr[4]==arr[i])
        {
            g++;
        }


    }
    cout<<"first element occured"<<c<<"number of times"<<endl;
      cout<<"2nd element occured"<<d<<"number of times"<<endl;
       cout<<"3rd element occured"<<e<<"number of times"<<endl;
         cout<<"4th element occured"<<f<<"number of times"<<endl;
           cout<<"5th element occured"<<g<<"number of times"<<endl;
}
