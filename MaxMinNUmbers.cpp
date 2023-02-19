#include<iostream>
using namespace std;

int main()
{
	//if int num1 = 20;---->>num1 = 30----num1 will have value 30
//find maximum adn minimum numbers 
//int num1,num2,num3,num4,num5;
//int max= 0,min = 999;
//cout<<"Enter numbers:\t";
//cin>>num1>>num2>>num3>>num4>>num5;
//if(num1>max) //example = num1 = 10--->10>0-->>max = 10
//max = num1;
//if(num2>max)
//max = num2;
//if(num3>max)
//max = num3;
//if(num4>max)
//max = num4;
//if(num5 > max)
//max = num5;
//cout<<"Maximum number is:\t"<<max<<endl;
//
//if(num1 <min)
//min  = num1;
//if(num2<min)
//min = num2;
//if(num3<min)
//min = num3;
//if(num4<min)
//min = num4;
//if(num5<min)
//min = num5;
//cout<<"Minimum number is :\t"<<min<<endl;
//	
//max and min by using arrays------------>>
int array[5];
int max,min;
for(int i=0;i<5;i++)
{
	cout<<"Enter array:\t";
	cin>>array[i];
}
max = min = array[0];
for(int i=0;i<5;i++)
{
	if(array[i]>max)
	max = array[i];
	if(array[i] < min)
	min = array[i];
}
cout<<"Max number is:\t"<<max <<endl;
cout<<"Min number is:\t"<<min<<endl;
}