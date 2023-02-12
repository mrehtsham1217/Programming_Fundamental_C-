#include<iostream>
using namespace std;

int main()
{
	//----------------display the table of 9-------------------------
//int table = 9;
//int limit = 10;	
//int i = 1;//loop starting point
//do
//{
//	cout<<table<<"X"<<i <<"="<<table*i<<endl;
//	i++;
//}while(i<=10);
//--------------------------qno2
//int number;
//int i = 1;
//int fact = 1;
//cout<<"Enter number for factorial:\t";
//cin>>number;
//do
//{
//	fact = fact *i;
//	i++;
//}while(i<=number);
//cout<<"The factorial of number is :\t"<<fact;
//---------------------------------------QNO3-----------------------------
//int base;
//int power;
//int result = 1;//for multiplication with base
//int i = 0;//loop startting point
//cout<<"Enter base:\t";
//cin>>base;
//cout<<"Enter power:\t";
//cin>>power;
//
//do
//{
//	result = result * base;
//	i++;
//}while(i<5);
//cout<<"2 rasie to the power 5:\t"<<result;
//------------------------------qbo4-------------------------
char gender;
int i = 1;
int countMale = 0;
int countFemale = 0;

do
{
	cout<<"Enter gender of the student:\t";
	cin>>gender;
	if(gender == 'm' || gender == 'M')
	{
		countMale++;
	}
	else if(gender == 'f' || gender == 'F')
	{
		countFemale++;
	}
	else
	{
		cout<<"Invalid choice"<<endl;
	}
	i++;
	
}while(i<=10);
cout<<"Total male student:\t"<<countMale<<endl;
cout<<"Total female students:\t"<<countFemale<<endl;

return 0;

















}