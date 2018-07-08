#include<iostream>
using namespace std;
int main()
{
  int arr[10];
  int s1=0;
  int s2=0;
  int multi=0;
  cout<<"enter the array"<<endl;
  for(int i=0;i<10;i++)
  {
      cin>>arr[i];
  }
  for(int i=4;i>=0;i--)
  {
      s1=s1+arr[i];
  }
  cout<<"sum of first subarray from top to mid is"<<endl;
  cout<<s1<<endl;
  for(int i=9;i>4;i--)
  {
      s2=s2+arr[i];
  }
  cout<<"sum of second subarray from bottom to mid is"<<endl;
  cout<<s2<<endl;
  cout<<"multiplication of both the subarrays is"<<endl;
  multi=s1*s2;
  cout<<multi<<endl;


}
