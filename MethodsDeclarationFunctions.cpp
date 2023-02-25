#include<iostream>
#include "functions.h";//must include before useage
using namespace std;
//there are three methods to declare and initilaize the fucntion
//-------first method-------------
//int sum(int num1,int num2)//definition
//{
//	return num1 + num2;
//}
//int multiple(int num1,int num2)
//{
//	return num1 * num2;
//}
//--------second method------------------
//void table(int limit,int table);

int main()
{
	cout<<sum(10,20);
	cout<<"\n";
	cout<<multiple(10,20);
	cout<<"\n";
	table(10,7);
	cout<<"\n\n";
	hello() ;
}
//initilaize tthe function
//void table(int limit,int table)
//{
//	int i = 1;
//	while(i<=limit)
//	{
//		cout<<table <<"X"<<i<<"="<<table * i<<endl;
//		i++;
//	}
//}
