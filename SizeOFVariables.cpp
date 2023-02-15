//how to check the size of variables----->>
#include<iostream>
using namespace std;


int main()
{
	int num1 = 10;
	float num2  =20.5;
	char ch = 'a';
	double num3  = 10.5;// 1 byte = 8 bits
	long num4 = 2000;
	short num5  =10;
	cout<<"The size of int varibable is \t"<<sizeof(num1)<<endl;//cover 4 byte space in memory
	cout<<"The size of float varibable is \t"<<sizeof(num2)<<endl;//cover 4 byte space in memory
	cout<<"The size of character varibable is \t"<<sizeof(ch)<<endl;//cover 1 byte space in memory
	cout<<"The size of double varibable is \t"<<sizeof(num3)<<endl;//cover 8 byte space in memory
	cout<<"The size of long varibable is \t"<<sizeof(num4)<<endl;//cover 4 byte space in memory
	cout<<"The size of short varibable is \t"<<sizeof(num5);//cover 2 byte space in memory
	
}