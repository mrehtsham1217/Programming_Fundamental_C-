#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 3;
	int array[SIZE][SIZE];
	//user input for 2D array
	for(int rows=0;rows<SIZE;rows++)
	{
		for(int cols=0;cols<SIZE;cols++)
		{
			cout<<"Enter array:["<<rows<<","<<cols<<"]\t";
			cin>>array[rows][cols];
		}
	}
	//diagnoals elements in array
	cout<<"\n-----------------Diagonals elements------\n";
	for(int rows = 0;rows<SIZE;rows++)
	{
		for(int cols=0;cols<SIZE;cols++)
		{
			if(rows==cols||rows+ cols==SIZE-1)
			{
				cout<<array[rows][cols]<<"\t";
			}
			else
			cout<<" "<<"\t";
		}
		cout<<endl;
	}
	return 0;
}