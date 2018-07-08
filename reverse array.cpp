//write a program to create array of 5 elements and print it in reverse ...ohk.... do u got the question ?haan what ?
//jo elements enter karenge usko reverse min print karna h ya..first input then print it in reverse....reverse ko input karenge
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<5;i++)
{
    cin>>arr[i];
}
cout<<"reverse array is"<<endl;
for(int i=4;i>=0;i--)
{
    cout<<arr[i]<<endl;//done ...sahi h??? yep :) just extend this question
    //here u are just printing it ...now u create a array which will be reverse of given array ...mtlb means
    //a= 1,2,3,4,5 then reverse array= 5,4,3,2,1 ok ?yahi toh kiye u have just printed this value is not stored somewhere
    //now u have to store it too..?nahi  aaega
}

}
