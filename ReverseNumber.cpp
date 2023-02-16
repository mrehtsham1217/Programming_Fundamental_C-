#include<iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Enter any number:\t";
	cin>>number;
//	cout<<number%10;//4
//	number = number/10;//123
//	cout<<number%10;//43
//	number = number/10;//12
//	cout<<number%10;//432
//	number = number/10;//1
//	cout<<number%10;
while(number!=0)
{
	cout<<number%10;
	number = number/10;
	}	
	return 0;
}