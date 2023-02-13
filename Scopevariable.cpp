#include<iostream>
using namespace std;
//int number = 100;//Global variable
//function level variable
void Square(int number)//function level variable scope
{
	cout<<number * number;
}
int main()
{
//	cout<<number;
//cout<<number;
for(int i=0;i<5;i++)//block level variable
{
//	cout<<i<<endl;
}
cout<<i<<endl;//error i is not decalared in this scope
	return 0;
}