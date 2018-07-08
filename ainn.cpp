//so here you will take three variable one int one float and one double take usr input print them  in main fucntion and using a function too
//ready got the question  ?
//ya
 #include<iostream>
 using namespace std;
 void three_variable(int a,double b,float c)
 {
     //lets take a variable here named
     int pu;
     cout<<"Enter Value of Pu:"<<endl;
     cin>>pu;
 cout<<"the three variables in int double and float are respectively:"<<endl;
 cout<<a<<endl;
 cout<<b<<endl;

 cout<<c<<endl;

 cout<<"Value of Pu is "<<endl;
cout<<pu;
 }
 int main()
 {
 int a;
 double b;
 float c;

  cout<<"the value of first variable is"<<endl;
  cin>>a;
  cout<<"the value of second variable is"<<endl;
  cin>>b;
  cout<<"the value of third variable is"<<endl;
  cin>>c;

  three_variable(a,b,c);
 }

