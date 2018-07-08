#include<iostream>
using namespace std;
int main()

{
    int i,j,sp;
    for(i=1;i<=5;i++)
    {
        for(sp=1;sp<=5-i;sp++)
    {
        cout<<" ";
    }
    for(j=1;j<=i;j++)

{
    cout<<"*";

}
cout<<endl;
    }
}
