#include<iostream>
using namespace std;

int main()
{
	string str1;
	cout<<"Enter any string:\t";
	getline(cin,str1);
	
	for(int i=0;str1[i]!='\0';i++)
	{
		if(str1[i]>='A' && str1[i]<='Z')
		str1[i] = str1[i]+ 32;
		else if(str1[i]>='a' && str1[i]<='z')
		str1[i] = str1[i]- 32;
		else 
		cout<<" ";
		
	}
	cout<<str1;
}