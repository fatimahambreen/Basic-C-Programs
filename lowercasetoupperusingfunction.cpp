#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
  char arr[30];
  cout<<"enter the array"<<endl;
  cin>>arr;
  for(int i=0;arr[i]!='\0';i++)
  {
      arr[i]=toupper(arr[i]);


  cout<<arr[i];
  }
}
