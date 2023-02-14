#include<iostream>
using namespace std;

int main()
{
	//size declare
	const int SIZE = 10;
	//Declaaration of arrays
//	int arrayName[SIZE] = {1,2,3,4,5};
	int arrayName[SIZE];
	//-----------USER INPUT IN ARRAYS
	for(int i=0;i<SIZE;i++)
	{
		cout<<"Enter array: ["<<i<<"]\t";
		cin>>arrayName[i];
	}
	// Datatype---->int float character
	//ArrayName---->must be Understoodable
	//Size---->
//	cout<<arrayName [0]<<endl;
//	cout<<arrayName [1]<<endl;
//	cout<<arrayName[2]<<endl;
//	cout<<arrayName[3]<<endl;
//	cout<<arrayName[4]<<endl;
//------------by using for loop----------------
for(int i=0;i<SIZE;i++)
{
	cout<<arrayName[i]<<"\t";
}
}