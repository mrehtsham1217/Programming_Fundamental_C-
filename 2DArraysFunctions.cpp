#include<iostream>
using namespace std;
//global variables------------------->>use anywhere in program
const int ROWS = 3;//GLOBAL LEVEL DCOPE
const int COLS  =3;//GLOBAL
////first function for input array
////COLUMNS ARE NECESSARY TO PASS IN FUNCTIONS
//void inputArray(int array[ROWS][COLS])//columns are necessary
//{
//	for(int i=0;i<ROWS;i++)
//	{
//		for(int j=0;j<COLS;j++)
//		{
//			cout<<"Enter array:["<<i<<"]["<<j<<"]\t";
//			cin>>array[i][j];
//		}
//	}
//	
//}
////second function for array display------>>
//void outputArray(int array[ROWS][COLS])
//{
//	for(int i=0;i<ROWS;i++)
//	{
//		for(int j=0;j<COLS;j++)
//		{
//			cout<<array[i][j]<<"\t";
//		}
//		cout<<"\n";
//	}
//}
//FUNCTION FOR TRANSPOSE OF MATRICES
void InputArray(int array[ROWS][COLS])
{
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			cout<<"Enter array:["<<i<<"]["<<j<<"]\t";
			cin>>array[i][j];
		}
	}
}
void TransposeMatrices(int array[ROWS][COLS])
{
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			cout<<array[j][i]<<"\t";
		}
		cout<<"\n";
	}
}
int main()
{
	int array[ROWS][COLS]; 
	//calling input function
//	inputArray(array);
//	outputArray(array);  
InputArray(array);
TransposeMatrices(array);
}