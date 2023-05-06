#include<iostream>
using namespace std;
void ReverseString(char *ptr)
{
	int count = 0;
	while(*(ptr+count) != '\0')
	{
		count++;
	}
	//reverse charater array
	for(int i=0;i<count/2;i++)
	{
		char temp = *(ptr + i);
		*(ptr + i) = *(ptr + count -i -1);
		*(ptr + count -i-1) = temp;
	}
}

int main()
{
	//reverse character array using pointers
	char array[50];
	char *ptr;
	cout<<"Enter array:\t";
	gets(array);
	ptr = array;//array addres store in pointer
	cout<<"\n------Orignal array--------\n"<<array;
	cout<<"\n Reverse array-----------------\n";
//	ReverseString(array);
//	cout<<"\n------Reverse array--------\n"<<array;
ReverseString(ptr);
for(int i=0;array[i] !='\0';i++)
{
	cout<<*ptr++;
 } 
	
}
