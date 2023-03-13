#include<iostream>
using namespace std;

int main()
{
	int ROWSA,COLSA,ROWSB,COLSB;
	cout<<"Enter Rows and COLS OF A\t";
	cin>>ROWSA>>COLSA;   
	cout<<"Enter Rows and COLS OF B\t";
	cin>>ROWSB>>COLSB;
	int  A[ROWSA][COLSA],B[ROWSB][COLSB],C[ROWSA][COLSB];
	if(COLSA!=ROWSB)
	{
		cout<<"Multiplication is not possible:\t";
  }               
	else
	{
		cout<<"Input ist array from user:\n";
		for(int i=0;i<ROWSA;i++)
		{
			for(int j=0;j<COLSA;j++)
			{
				cout<<"Enter Array:["<<i<<"]["<<j<<"]\t";
				cin>>A[i][j];
			}
		}
		//input 2nd array
		cout<<"\n Enter second Array\n";
			for(int i=0;i<ROWSB;i++)
		{
			for(int j=0;j<COLSB;j++)
			{
				cout<<"Enter Array:["<<i<<"]["<<j<<"]\t";
				cin>>B[i][j];
			}
		}
		//multiplication of 2 Arrays ---->process
		for(int i=0;i<ROWSA;i++)
		{
			for(int j=0;j<COLSB;j++)
			{
				C[i][j] = 0;
				for(int k=0;k<COLSA;k++)
				{
					C[i][j] = C[i][j]+A[i][k]*B[k][j];
					
				}
			}
		}
			//display of multiplication
			cout<<"\n The multiplication of matrices:\n";
			for(int i=0;i<ROWSA;i++)
			{
				for(int j=0;j<COLSB;j++)
				{
					cout<<C[i][j]<<"\t";
				}
				cout<<"\n";
			}
		
	}
}
			  
			
			  
		   