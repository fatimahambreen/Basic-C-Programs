//basic parameter passing and user input
#include<iostream>
using namespace std;
void my_function( int value,float marks )
 {
    cout<<"value and marks entered are ";
    cout<<value<<endl;
    cout<<marks<<endl;
}
int main()
{

    int value;
    float marks;
    cout<<" Enter Value : "<<endl;
    cin>>value;
    cout<<"Enter marks :";
    cin>>marks;


    cout<<"values and marks are";
     cout<<value<<endl;
     cout<<marks<<endl;
    my_function(value,marks) ;
    }
