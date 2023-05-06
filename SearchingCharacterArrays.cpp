#include<iostream>
using namespace std;

int main()
{
	char array[50]  = {"Hello programmers "};
	char *ptr;
	char ch;
	char searc = 'N';
	ptr = array;//address of array in pointer
	cout<<"Enter character for search:\t";
	cin>>ch;
	while(*ptr++!='0')
	{
		if(*ptr == ch)
		{
			searc  = 'Y';
		}
		
	}
	if(searc == 'Y')
	{
		cout<<"Character found in array:"<<endl;
	}
	else
	cout<<"Character not found in array:\t";
}
