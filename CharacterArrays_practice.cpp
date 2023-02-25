#include<iostream>
using namespace std;
void functionName(char array[])
{
	int count = 0;
	for(int i=0;array[i]!='\0';i++)
	{
	count++;
	}
cout<<"Total characters in array:\t"<<count;
}

int main()
{
/*Declare an array of characters. The size of 
the array is 100. Input a string from the user 
and insert space equal to tab character 
where spaces already exists.*/
//char arrayName[100];
//cout<<"Enter character array:\t";
//gets(arrayName);//another way to get input form user
//for(int i=0;arrayName[i]!='\0';i++)
//{
//	//get any array from user
//	if(arrayName[i] == ' ')
//	{
//		arrayName[i] = '\t';
//	}
//	
//}
//cout<<arrayName ;

//-----------QNO2------------------------------------
/*

Input your name through keyboard, save it 
into an array and count the no. of characters 
of the inputted name

*/
char array[50];
cout<<"Input array from user:\t";
gets(array);//Muhammad ali
//int count = 0;
//for(int i=0;array[i]!='\0';i++)
//{
//	count++;
//}
//cout<<"Total characters in array:\t"<<count;
functionName(array); 
}
