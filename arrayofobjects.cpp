//write a program to create  a class named book with one private data member book_id and one prottected data member book_name
//apart from that provide three member function
//take_input
//print_output
//validate_book_id - this will take book_id as parameter and match with current object data
//create 3 objects using array of objects
#include<iostream>
using namespace std;
class book
{
private:
    int book_id;
protected:
    char book_name[100];
public:
    void take_input()
    {
        cout<<"enter the book id"<<endl;
        cin>>book_id;
        cout<<"enter the book name"<<endl;
        cin>>book_name;

    }
    void print_output()
    {
        cout<<book_id<<endl;
        cout<<book_name<<endl;
    }
    void validate_book_id(int bookno)
    {
        if(book_id==bookno)
        {
            cout<<"book validated"<<endl;
        }
        else
        {
            cout<<"not valid"<<endl;
        }
    }
};
int main()
{
book a[3];
for(int i=0;i<3;i++)
{
    a[i].take_input();

}
for(int i=0;i<3;i++)
{
    a[i].print_output();
}
for(int i=0;i<3;i++)
{
    a[i].validate_book_id(7);
}
}
