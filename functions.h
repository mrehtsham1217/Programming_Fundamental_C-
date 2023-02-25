#include<iostream>
using namespace std;
//third method to use functions---------->>
int sum(int num1,int num2)//definition
{
	return num1 + num2;
}
int multiple(int num1,int num2)
{
	return num1 * num2;
}
void table(int limit,int table)
{
	int i = 1;
	while(i<=limit)
	{
		cout<<table <<"X"<<i<<"="<<table * i<<endl;
		i++;
	}
}
void hello()
{
	for(int i=0;i<10;i++)
	{
		cout<<"Hello world"<<endl;
	
	}
}