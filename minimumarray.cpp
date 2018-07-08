
#include<iostream>
using namespace std;
int main()
{
      int arr[10];


  cout<<"enter array elements"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];

    }
 int   minm= arr[0];
    for(int i=0;i<10;i++)
    {
    if(minm>arr[i])
    {
        minm=arr[i];
    }

}
cout<<"minimum element is"<<endl;
 cout<<minm<<endl;
}
