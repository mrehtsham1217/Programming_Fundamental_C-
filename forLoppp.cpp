#include<iostream>
using namespace std;

int main()
{
//	for(int i=0;i<5;i++)//starting point ---ending point---sequence
//	{
//		cout<<"Welcome to for loops"<<endl;
//	}
int sum  = 0;
//for(int i=1;i<=100;i++)
//{
//	sum = sum + i;
//} 
//cout<<"The sum of 100 numbers:\t"<<sum;
//------------------------------------------------------------------------------
//for(int i=1;i<=100;i++)
//{
//	if(i%2==0){
//	sum = sum + i;
//		
//	}
//} 
//cout<<"The sum of 100 numbers:\t"<<sum;
//------------------------------------------------------------------------------
//for(int i=1;i<=100;i++)
//{
//	if(i%2!=0){
//	sum = sum + i;
//		
//	}
//} 
//cout<<"The sum of 100 numbers:\t"<<sum;
//----------------------continue and break statement---------------------------
//int i;
//for(i=0;i<10;i++)
//{
//	if(i==5)
//	break;
//cout<<i<<endl;
//}
//-----------------continue statement in loops------------------------
//for(int i=0;i<10;i++)
//{
//	if(i==5)
//	{
//	continue;	
//	}
//	cout<<i<<endl;
//}
//--------------------------NESTED FOR LOOP -----------------------------
//for(int i=0;i<5;i++)
//{
//	for(int j=0;j<5;j++)
//	{
//		cout<<"*";
//	}	
//	cout<<endl;
//}
//---------------------steric triangle---------------------------------------
for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		cout<<"*";
	}	
	cout<<endl;
}
	return 0;
}