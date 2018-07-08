//question 1 - Write a program in c++ to take input a float value , a integer value and produce the result as multiplication of two numbers.
 #include<iostream>
 using namespace std;
 double multiplication(int a,float b)
 {

 cout<<"enter the two numbers"<<endl;
 cout<<"the first number entered is"<<endl;
 cout<<a;
 cout<<"the second number entered is"<<endl;
 cout<<b;
 double c;
 c=a*b;
 cout<<"the result is"<<endl;
 cout<<c;
 return c;
 }
 int  main()
 {
 int a;
 float b;
 cout<<"the integer entered is"<<endl;
 cin>>a;
 cout<<"the floating number entered is"<<endl;
 cin>>b;
 double c=a*b;
 cout<<"the result of multiplication is"<<endl;
 cout<<c;
double return_value;
return_value= multiplication(a,b);
 cout<<"The value of return value is: "<<endl;
 cout<<return_value;
 }
