//write down the question
//write a class named employee with following properties
//four data members all private .. emp_id,emp_name,emp_sal,emp_age
//and two functions to one take_input() and other print_output()
#include<iostream>
using namespace std;
class employee
{
private:
    int emp_id;
    char emp_name[20];
    double emp_sal;
    int emp_age;
public:
    void take_input()
    {
        cout<<"enter the employee id"<<endl;
        cin>>emp_id;
        cout<<"enter the employee name"<<endl;
        cin>>emp_name;
        cout<<"enter the employee salary"<<endl;
        cin>>emp_sal;
        cout<<"enter the age of the employee"<<endl;
        cin>>emp_age;

    }
    void print_output()
    {
        cout<<emp_id<<endl;
        cout<<emp_name<<endl;
        cout<<emp_sal<<endl;
        cout<<emp_age<<endl;

    }

};
int main()
{
    employee puttu;
    puttu.take_input();
    puttu.print_output();
}
