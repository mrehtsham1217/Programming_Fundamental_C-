#include<iostream>
using namespace std;

int main()
{
//int x;
cout<<"Enter first number\t"<<endl;
cin>>x;
cout<<"The user put the value:\t"<<x<<endl;
int num1;
int num2;
int sum;
cout<<"Enter first number:\t";
cin>>num1;
cout<<"Enter second number:\t";
cin>>num2;
sum = num1 + num2;
cout<<sum;
-------------task----------------
reverse 123--->321
int num1;
cout<<"Enter four digit number\t";
cin>>num1;
cout<<num1%10;//123%10--->3
num1 = num1 /10;//12
cout<<num1%10;//12-->2
num1 = num1/10;//12/10--->1
cout<<num1%10;//1234--->
num1 = num1/10;
cout<<num1;//321
;
//--------------------Task 2--------------------
int a = 10;
int b = 20;
int c;
cout<<"The value of a before swaping:\t"<<a<<endl;
cout<<"The value of b before swaping:\t"<<b<<endl;
//swaping process
c   = a;
a = b;
b = c;
cout<<"----------------------------------------------"<<endl;
cout<<"The value of a after swaping:\t"<<a<<endl;
cout<<"The value of b after swaping:\t"<<b<<endl;
}










