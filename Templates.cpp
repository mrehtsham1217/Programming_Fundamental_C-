#include<iostream>
using namespace std;
//function with singal parameters
//function templates
//template<class T>//basic syntax of template
//void Sum(T num1,T num2)//T according to arguments use 
//{
//	cout<<"The sum of two numbers:\t"<<num1+num2;
//}
//void Sum2(double num1,double num2)
//{
//	cout<<"The sum of two numbers:\t"<<num1+num2<<endl;
//}
//template<class T1, class T2>//class keyword is necessary
//T1 sum(T1 num1,T2 num2)
//{
//	return num1 + num2;
//}
//function templates
template<class T>
void swapp(T &num1,T &num2)
{
	T temp = num1;
	num1 = num2;
	num2 = temp;
}
//void Swap2(string &first,string &second)
//{
//	string temp = first;
//	first = second ;
//	second  = temp;
//}
int main()
{
	//calling of function
//	cout<<sum(20.30,30);
//	Sum2(20.5,30.3);
//int num1 = 30;
//int num2 = 40;
string num1 = "Pakistan";
string num2 = "FSD";
//string first = "Pakistan";
//string second = "FaisalabAd";
cout<<"Before swaping:\t"<<num1<<"\t"<<num2<<endl;
swapp(num1,num2);
cout<<"\n";
cout<<"After swaping:\t"<<num1<<"\t"<<num2<<endl;
//cout<<"\n-------------------------------------------\n";
//cout<<"Before swaping:\t"<<first<<"\t"<<second<<endl;
//Swap2(first,second);
//cout<<"\n";
//cout<<"After swaping:\t"<<first<<"\t"<<second<<endl;

	
}