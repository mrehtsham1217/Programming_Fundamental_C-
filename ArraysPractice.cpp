#include<iostream>
using namespace std;

int main()
{
	/* 1.Input marks of 5 students inside an array of size 5 and 
display the average marks. (Without Loop)*/
//	const int SIZE  = 5;
//	int Marks[SIZE];
//	int ArraySum = 0;
//	int Average = 0;
//	//---------taking input from user------------------
//	for(int i=0;i<SIZE ;i++)
//	{
//		cout<<"Enter array ["<<i<<"]\t";
//		cin>>Marks [i];
//	}
//	cout<<"\n------------Displaying arrays------\n";
//	for(int i=0;i<SIZE;i++)
//	{
//		cout<<Marks[i]<<"\t";
//		ArraySum  = ArraySum + Marks[i]; //20/5 = 4;
//		Average  = ArraySum /SIZE ;
//		
//	}
//	// Arraysum = marks[0]+ marks[1]+ marks[2]----marks[5]/5
//	cout<<"The sum of arrays:\t"<<ArraySum <<endl;
//	cout<<"The average of array:\t"<<Average <<endl;

//-------------------QNO2----------------------
//int sourcArray[7] = {1,2,3,4,5,6,7};
//int DestinationArray[7];
////size of array must be same for data copying
////copying of data from one array to other----------
//for(int i=0;i<7;i++)
//{
//	DestinationArray[i] = sourcArray [i];
//}
//
////displaying the arrays
//cout<<"Destination array \t Source Array\n";
//cout<<"-----------------\t----------------\n";
//for(int i=0;i<7;i++)
//{
//	cout<<DestinationArray[i];
//	cout <<"\t\t\t"<<sourcArray[i]<<endl ;
//}
//-------------------qno3---------------------
/*3. Input a float array of size 10 and 
display the smallest element of the array (using loop)*/
//const int SIZE = 10;
//int array[SIZE];
//int min = 0;
//for(int i=0;i<SIZE;i++)
//{
//	cout<<"Enter array:["<<i<<"]\t";
//	cin>>array[i];
//}
//    min = array[0];
//    for(int i=0;i<SIZE;i++)
//    {
//    	if(array[i] < min)
//    	{
//    		cout<<array[i];
//		}
//	}
//	cout<<min<<endl;

//---------qno4----------------
const int SIZE = 5;
int array[SIZE] = {1,2,3,4,5};
int sum = 0;

for(int i=0;i<SIZE;i++)
{
	sum = sum + array[i] * array[i];
}
cout<<"The sum of sqaure of array:\t"<<sum;







}