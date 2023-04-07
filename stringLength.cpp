#include<iostream>
using namespace std;

int main()
{
	string str1;
//	int count = 0;
int words = 0;
	cout<<"Enter string:\t";
	getline(cin,str1);//method for user input
	
//	for(int i=0;str1[i]!='\0';i++)//for letter counting
//	{
//		count++;
//	 } 
	 	for(int i=0;str1[i]!='\0';i++)//loop for total words in string
	{
		if(str1[i]==' ')
			words++;
	 }
	
//	 cout<<"The lenght of string is:\t"<<count;
	 cout<<"The lenght of string is:\t"<<(words+1);
}