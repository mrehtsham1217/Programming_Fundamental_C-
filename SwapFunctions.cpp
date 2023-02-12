#include<iostream>
using namespace std;

int main()
{
	//swap
	int num1 = 20;
	int num2 = 40;
	cout<<"Before swap:\t"<<num1<<"\t"<<num2<<endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout<<"After swap:\t"<<num1<<"\t"<<num2<<endl;
}