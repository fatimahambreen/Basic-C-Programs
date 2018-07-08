#include<iostream>
using namespace std;
class vectorr
{
    public:
    float vector[10];

    void create()
    {
        cout<<"the series of element are"<<endl;
        for(int i=0;i<10;i++)
        {
            cin>>vector[i];
        }
    }
    void modify()
    {

            vector[5]=vector[5]+3;

    }
    void multiply()
    {
        for(int i=0;i<10;i++)
        {
          vector[i]=(vector[i]*2);
        }
    }
    void display()
    {
       // multiply();
        for(int i=0;i<10;i++)
        {
            cout<<vector[i]<<endl;
        }
    }
};
int main()
{
    vectorr a;
    a.create();
    a.modify();
    a.multiply();
    a.display();

}


