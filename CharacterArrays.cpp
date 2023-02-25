#include<iostream>
using namespace std;

int main()
{
//how to declare character array
//char arrayName[50] = {'A','L','I','A','h','s','a','n'};
//Another way for initillization
//char arrayName[50] = {"Ali ahsan"}; 
//display character array
//how to take input from user in character array----
char arrayName[50];
//two methods to get input from user
cout<<"Enter array:\t";
cin>>arrayName ;
for(int i=0;i<50;i++)
{
	if(arrayName[i] != '\0')//'\0' is special character input by compiler
	{
	cout<<arrayName [i];
		
	}
	else
	break;
}

}