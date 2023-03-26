#include<iostream>
using namespace std;

int main()
{
	string str1;//string declaration
	cout<<"Enter string:\t";
	//cin>>str1;
	getline(cin,str1);//most preferable method for strings
	//cout<<str1;//display string
	
	//for loop
//	for(int i=0;str1[i]!='\0';i++)
//	{
//		cout<<str1[i];
//	}
for(int i=0;i<10;i++)
	{
		cout<<str1[i];
	}
}