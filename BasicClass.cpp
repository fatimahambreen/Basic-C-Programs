//Basic Class problem
//let us define a class named student with data
//private member - roll no
//protected - cgpa
//public member - name
#include<iostream>
using namespace std;
class student
{

private:
    int roll_no;
protected:
    double cgpa;
public:
    char name[50];
    void take_input()
    {
        cout<<"enter the roll number"<<endl;
        cin>>roll_no;
        cout<<"enter the cgpa"<<endl;
        cin>>cgpa;
        cout<<"enter the name"<<endl;
        cin>>name;
    }
    void print_output()
    {
        cout<<roll_no<<endl;
        cout<<cgpa<<endl;
        cout<<name<<endl;
    }

};
int main()
{
student a;
a.take_input();
a.print_output();

}
