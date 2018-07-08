#include<iostream>
using namespace std;
int main()
{
  char arr[30];
  cout<<"enter the character array"<<endl;
  cin>>arr;
  for(int i=0;arr[i]!='\0';i++)
  {
      if(i%2!=0)
      {
          arr[i]='*';
      }
      cout<<arr[i];
  }
}

