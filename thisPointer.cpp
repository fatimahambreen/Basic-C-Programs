#include<iostream>
using namespace std;
class TestClass
{
    public :
    int a;
    int b;
    void print()
    {

        cout<<this->a<<this->b;
    }
};
int main()
{

    TestClass obj;
    TestClass *objpointer;
    objpointer= &obj;
    obj.a=5;
    obj.b=6;
    cout<<(*objpointer).a;
     objpointer->print();
}
