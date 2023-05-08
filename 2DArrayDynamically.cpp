#include<iostream>
using namespace std;
//function for user input
void inputArray(int **array)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<"Enter array:["<<i<<","<<j<<"]\t";
			cin>>array[i][j];
		}
	}
}
//function for output array using double 
void outputArray(int **array)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<array[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int main()
{
	//How to create 2D arrays using double pointers
	//ist step----01
	int **array;//declare 2D pointer
	array = new int *[3];//dynamially allocated memory
	//we have created 3 rows
	//now wee would create columns in the rows
//	array[0] = new int[3];
//	array[1] = new int[3];
//	array[2] = new int[3];
	for(int i=0;i<3;i++)
	{
		array[i] = new int[4];
	}
	inputArray(array) ;//calling of input function
	outputArray(array);//calling of output array 
}