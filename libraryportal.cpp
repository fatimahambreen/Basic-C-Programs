#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    char name[50];
    char branch[40];
    int rollno=0;
    int copyno=0;
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"enter your branch"<<endl;
    cin>>branch;
    cout<<"enter your rollno"<<endl;
    cin>>rollno;
    cout<<"library has only one book with ten copies of it"<<endl;
    cout<<"enter the number of copies you want to issue"<<endl;
    cin>>copyno;
    system("cls");
    cout<<"LIBRARY PORTAL"<<endl;
    cout<<"NAME OF STUDENT IS:"<<name<<endl;
    cout<<"ROLLNO OF STUDENT IS:"<<rollno<<endl;
    cout<<"BRANCH OF STUDENT IS:"<<branch<<endl;
    cout<<"NUMBER OF COPIES WILLING TO BE ISSUED BY THE STUDENT IS:"<<copyno<<endl;
    if(copyno>10)
    {
        cout<<"ISSUE NOT GRANTED"<<endl;
    }
    else if(rollno>30)
    {
        cout<<"YOU CAN ISSUE MAXIMUM OF FIVE BOOKS"<<endl;
    }
}




