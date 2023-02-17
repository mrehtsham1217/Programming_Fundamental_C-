#include<iostream>
using namespace std;
//<<---------function overloading------------------------->>
int sum(int num1,int num2)
{
	return num1 + num2;
}
//second function with same name same return type but different parametrs
int sum(int num1 , int num2 ,int num3)//3 parametrs
{
	return num1 + num2 + num3;
 } 
 //error function because of same parameters
// double sum(int num1 , int num2 ,int num3)
// {
// 	return num1 + num2 + num3;
// }
double sum(int num1)
{
	return num1 + num1;
}
int main()
{
	//calling the sum function
	cout<<"The sum of two numbers:\t"<<sum(6,5)<<endl;
	//calling three parameters functions
	cout<<"The sum of three variables:\t"<<sum(2,4,6)<<endl;
	//error function because of same parameters
	//cout<<"The sum of one varibale:\t"<<sum(20,30,40)<<endl;
	//calling third function
	cout<<"The sum of one varibale:\t"<<sum(20)<<endl;
}