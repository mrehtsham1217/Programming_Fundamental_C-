#include<iostream>
using namespace std;
struct Array
{
	int array[10];
	int length;
	
};
void InsertData(Array *ptr,int index,int element)
{
	if(index>=0 && index<=ptr->length)
	{
		for(int i=ptr->length;i>=index;i--)
		{
			ptr->array[i+1] = ptr->array[i];
		}
		ptr->length++;
		ptr->array[index] = element;
	}
	
}
void Display(Array *ptr)
{
	for(int i=0;i<ptr->length;i++)
	{
		cout<<ptr->array[i]<<" ";
	}
}

int main()
{
	Array arr;
	cout<<"Enter length:\t";
	cin>>arr.length;
	cout<<"\n---------------------------------\n";
	for(int i=0;i<arr.length;i++)
	{
	cout<<"Enter array:["<<i<<"]\t";
	cin>>arr.array[i];
		
	}
	InsertData(&arr,3,100);
	Display(&arr);  
	
}