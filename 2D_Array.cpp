#include<iostream>
using namespace std;

int main()
{
	//decalartion of 2D arrays
	//first no of rows and second number of columns
//	int array[2][3] = {{1,2,3},{4,5,6}};
const int ROWS = 4;
const int COLS = 4;
int array[ROWS][COLS];
//user input for 2D arrays
for(int i=0;i<ROWS;i++)
{
	for(int j=0;j<COLS;j++)
	{
		cout<<"Enter array ["<<i<<"]["<<j<<"]\t";
		cin>>array[i][j];
	}
}
	//output of array----->>display
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			cout<<array[i][j]<<"\t";
		}
		cout<<"\n";
	}
}