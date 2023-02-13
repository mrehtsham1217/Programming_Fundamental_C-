#include<iostream>
using namespace std;
/*
void Swap(int num1,int num2)
{
	int temp = num1;//temp = empty variable---->temp = 10 e.g
	num1 = num2;//num2---->empty
	num2 = temp;//temp again empty--->>numbers swap
	cout<<"Value of num1 in function:\t"<<num1<<endl;
	cout<<"Value of num2 in function:\t"<<num2<<endl;
}
void Swap(int &num1,int &num2)
{
	int temp = num1;//temp = empty variable---->temp = 10 e.g
	num1 = num2;//num2---->empty
	num2 = temp;//temp again empty--->>numbers swap
	cout<<"Value of num1 in function:\t"<<num1<<endl;
	cout<<"Value of num2 in function:\t"<<num2<<endl;
}
*/
//write two functions 
//input through one function
//output through second
void Input(int &num)//call by reference
{
	cout<<"Enter any number:\t";
	cin>>num;
}
void Output(int &num)//same number call by reference-
{
	cout<<"The square of number:\t"<<num*num;
}

int main()
{
	/*
	int num1 = 10;
	int num2 = 20;
	cout<<"Before swaping the value of num1 ,num2:\t"<<num1<<"\t"<<num2<<endl;
	Swap(num1,num2);
	cout<<"After swaping the value of num1 ,num2:\t"<<num1<<"\t"<<num2<<endl;*/
	 int num;
	 Input(num);//call by refernce
	 Output(num);  //call by reference
	  
}