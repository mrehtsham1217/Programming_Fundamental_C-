#include<iostream>
using namespace std;

int main()
{
//	int num = 1;//loop starting point
//	do
//	{
//		cout<<num<<"\t";
//		num++;
//	}while(num<1);//1 < 1 false
//int num = 0;
//------------------------------EVen  Numbers between 0-100------------------
//do
//{
//	if(num%2==0)
//	{
//		cout<<num<<"\t";
//		
//	}
//	num++;
//}while(num<=100);
//-------------------------------------Odd numbers between 1-100---------
//num = 1;//starting point
//	do
//	{
//		if(num%2 !=0)
//		{
//			cout<<num<<"\t";
//		}
//		num++;//sequence
//	}while(num<=100);//--->condition
//----------------------------sum of even number----------------
//int number = 0;
//int sum = 0;
//do
//{
//	if(number%2==0)
//	{	
//	sum = sum + number;
//	}
//	number++;
//}while(number <=100);
//cout<<"The sum of even numbers:\t"<<sum;
//---------------------------Sum of odd numbers------------------------------------
int number = 0;
int sum = 0;
do
{
	if(number%2 != 0)
	{	
	sum = sum + number;
	}
	number++;
}while(number <=100);
cout<<"The sum of even numbers:\t"<<sum;
	return 0;
}