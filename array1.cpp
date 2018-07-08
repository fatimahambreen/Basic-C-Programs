#include<iostream>
using namespace std;
int main()
{
    char arr1[5];
    char arr2[5];
    int found=0;
    cout<<"input the character array 1"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr1[i];
    }
    cout<<"input the character array 2"<<endl;
    for(int j=0;j<5;j++)
    {
        cin>>arr2[j];
    }
    for(int i=0;i<5;i++)
    {

        if(arr1[i]==arr2[i])
        {


         found=1;
        }
      else
      {


         found=0;
          break;
      }
    }
if(found==1)
{
cout<<"both the array are identical"<<endl;
}

        else
        {
cout<<"they are not identical"<<endl;
}
}
