#include<iostream>
using namespace std;
//function for user input------>>
void userINput(int *num1,int *num2)
{
	cout<<"Enter number1:\t";
	cin>>*num1;
	cout<<"Enter number 2:\t";
	cin>>*num2;
}
//mulyiply two numbers using pointers
int MultipleFunction(int *num1,int *num2)
{
	int result = (*num1) * (*num2);
	return result;

}
//swap function through pointers
void Swapp(int *num1,int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main()
{
	//pointers and functions
	int num1 = 20,num2  =40;
//	cout<<"Enter two numbers:\t";
//	cin>>num1>>num2;
 //calling of function
// userINput(&num1,&num2);
  cout<<"Before swaping :\t"<<num1<<"\t"<<num2;
  Swapp(&num1,&num2); 
  cout<<endl;
  cout<<"After swaping :\t"<<num1<<"\t"<<num2;
// cout<<MultipleFunction(&num1,&num2); 
	return 0;

}