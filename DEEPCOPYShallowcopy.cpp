#include<iostream>
using namespace std;

int main()
{
//	int *first;//first pointer
//	first = new int[5] {1,2,3,4,5};//array decalratoon
//	int *second;//second pointer
//	second = first;//assign the address of ist to second
//	delete []first;
//	for(int i=0;i<5;i++)
//	{
//		cout<<second[i];
//	}
	int *first;
	first = new int[5]  {1,2,3,4,5};
	int * second;
	second = new int[5];
	
	for(int i=0;i<5;i++)
	{
		second[i] = first[i];
	}
	cout<<"\n--------------------------------\n";
	delete []first;
	for(int i=0;i<5;i++)
	{
	
		cout<<second[i];
	}
}