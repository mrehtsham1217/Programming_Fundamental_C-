#include<iostream>
using namespace std;
//first fucntion for array input
void InputArray(int array[],int size)//parameters
{
	//array ---->call by reference--->important
	//array[0]---->>call by value
	for(int i=0;i<size;i++)
	{
		cout<<"Enter array:["<<i<<"]\t";
		cin>>array[i];
	}
}
//function for output array
void OutputArray(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<"\t";
	}
}
void GetInputArray(int array[], int size)//paramters
{
	for(int i=0;i<size;i++)
	{
		cout<<"Enter array:["<<i<<"]\t";
		cin>>array[i];
	}
}
//output function for array
void OutPutArray(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<"\t";
	}
}
//for squAre of the array
void SquaredArray(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		
		cout<<array[i] * array[i]<<"\t";
		
	}
}
//--------------------QNO2---------------------------->>
//First function array input
//secondFunction---->>display
//3rd function--->square display
int main()
{
//How arrays and functions works with each other
//const int SIZE = 10;
//int array[SIZE];//first step decalaration of array
//function for getting input
//InputArray(array,SIZE);//array name and array size 
//---------calling function for output array----------->>
//OutputArray(array,SIZE); 

//--------------------------QNO2---------------------
const int SIZE = 10;
int array[SIZE];//first step

//first calling----->>input array
GetInputArray(array,SIZE);
cout<<"\n--------- Dispalying of array--------------\n";
// output array function calling------>
OutputArray(array,SIZE);
cout<<"\n";
//Squared Array------->>
cout<<"\n--------- Dispalying Squared  array--------------\n";
SquaredArray(array,SIZE);  

}