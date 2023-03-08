#include<iostream>
using namespace std;
struct Array
{
	int array[10];
	int length;
	
};
void DeleteData(Array *ptr,int index)
{
	if(index>=0 && index<=ptr->length)
	{
		for(int i=index;i<ptr->length;i++)
		{
			ptr->array[i] = ptr->array[i+1];
		}
		ptr->length--;
	}
	
}
void display(Array *ptr)
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
	
	for(int i=0;i<arr.length;i++)
	{
		cout<<"Enter array:["<<i<<"]\t";
		cin>>arr.array[i];
	}
	DeleteData(&arr,3);
	display(&arr);  
	
}