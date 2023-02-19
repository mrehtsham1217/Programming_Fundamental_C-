#include<iostream>
using namespace std;

int main()
{
	//2d arrays
//	int array[5][5];
//	for(int i=0;i<5;i++)
//	{
//		for(int j=0;j<5;j++)
//		{
//			cout<<"enter array:["<<i<<"]["<<j<<"]\t";
//			cin>>array[i][j];
//		}
//	}
//	//display
//	cout<<"\n-----------------------------------\n";
//	for(int i=0;i<5;i++)
//	{
//		for(int j=0;j<5;j++)
//		{
//			cout<<array[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//---------------------2nd question-----
//int array[2][2];
//int array2[2][2];
//int SumArray[2][2];
//	for(int i=0;i<2;i++)
//	{
//		for(int j=0;j<2;j++)
//		{
//			cout<<"enter array:["<<i<<"]["<<j<<"]\t";
//			cin>>array[i][j];
//		}
//	}
//	//for input 2nd array------------
//	cout<<"\n INput 2nd array---------\n";
//	for(int i=0;i<2;i++)
//	{
//		for(int j=0;j<2;j++)
//		{
//			cout<<"enter array:["<<i<<"]["<<j<<"]\t";
//			cin>>array2[i][j];
//		}
//	}
//	//display
//	cout<<"\n-----------------------------------\n";
//	for(int i=0;i<2;i++)
//	{
//		for(int j=0;j<2;j++)
//		{
//			SumArray[i][j] = array[i][j] + array2 [i][j];
//		}
//		cout<<endl;
//	}
//	
//		for(int i=0;i<2;i++)
//	{
//		for(int j=0;j<2;j++)
//		{
//			cout<<SumArray[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//---------QNO3----------------------
int array[3][3];
int max = 0;
int min = 0;
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<"enter array:["<<i<<"]["<<j<<"]\t";
		cin>>array[i][j];
	}
}
max = min = array[0][0];
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		if(array[i][j]<min)
		min = array[i][j];
		if(array[i][j] >max)
		max = array[i][j];
	}
}
cout<<"MAx number is :\t"<<max<<endl;
cout<<"Min number is :\t"<<min<<endl;
}