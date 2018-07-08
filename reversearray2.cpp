#include<iostream>
using namespace std;
int  main()
{
    int arr[5];
    cout<<"enter elements of the array"<<endl;
    int s;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];

    }
    int reverse_of_array[5];
    int reverse_index=0;
    cout<<"reverse array"<<endl;

    for(int j=4;j>=0;j--)
    {
       reverse_of_array[reverse_index] =  arr[j]; // not getting ?? naaaa.. do i need to  solve ?haan.. ok just see
     reverse_index++; //getting ?hmnn


    }
    cout<<"**Reverse of array **"<<endl;
      for(int i=0;i<5;i++)
    {
       cout<<reverse_of_array[i]<<endl;//smjhi ??heaan...but hum itna soch hi nahi paate..

    }
}
