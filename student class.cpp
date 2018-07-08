#include<iostream>
using namespace std;
class student
{
private:
    int id;
    char name[50];
public:
    float marks[5];
    int input()
    {
         cout<<"enter the array elements"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    float sum()
    {

        float s=0;

        for(int i=0;i<5;i++)
        {
            s=s+marks[i];
        }
        return s;
    }
    float average()
    {
        float average=0;
        cout<<"average marks of the student is"<<endl;
        average=sum()/5;

        return average;
    }

};
    int main()
    {
        student a;
        a.input();
         cout<<"total marks of the entered elements"<<endl;
       cout<<a.sum();
        cout<<a.average();//ka kare..nhi aa rha h... pahla chiz sum float hai aur return int kara rahi ho ?
    }


