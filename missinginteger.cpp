#include<iostream>
using namespace std;
int find_in_array(int a[],int s,int value)
{   int found =0;
     for(int i=0;i<s;i++)
    {
        if(a[i]==value)
        {
            found=1;
            break;
        }

    }
   return found;
}
int main()
{
    int n;


    int found=0;

    cout<<"enter the integer"<<endl;
    cin>>n;

 int arr[n-1];
    cout<<"enter the elements of array"<<endl;
        for(int i=0;i<(n-1);i++)
        {
            cin>>arr[i];
        }

   for(int i=1;i<=n;i++)
   {
       /*    found=0;
       for(int j=0;j<n-1;j++)
       {

           if(arr[j]==i)
           {

               found=1;

               break;
           }
       }
       if(found==0)
       {

           cout<<"the missing number is  :"<<i;
           break;
       }*/
       if(find_in_array(arr,n-1,i)==0)
       {

           cout<<"missing no:"<<i<<endl;
       }
   }
}
