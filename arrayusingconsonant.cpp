#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char arr[10];
    int consonant=0;
    cout<<"enter array"<<endl;
    cin>>arr;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(isalpha(arr[i]))
        {



        if(arr[i]!='e'&&arr[i]!='a'&&arr[i]!='i'&&arr[i]!='o'&&arr[i]!='u'&&arr[i]!='A'&&arr[i]!='E'&&arr[i]!='I'&&arr[i]!='O'&&arr[i]!='U')
            {
        consonant=consonant+1;

    }
    }
    }
    cout<<consonant<<endl;

}
