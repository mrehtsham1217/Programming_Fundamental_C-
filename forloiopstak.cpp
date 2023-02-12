#include<iostream>
using namespace std;

int main()
{
//for(int i = 0;i<6;i++)
//	{
//	for(int j=0;j<i;j++)
//	{
//		cout<<"*";
//	}
//	cout<<endl;
//	}
//------------------------------------------------------------------------
//for(int i=0;i<6;i++)
//{
//	for(int j=6;j>i;j--)
//	{
//		cout<<"#";
//	}
//	cout<<endl;
//}
//-----------------------qno3------------------------------------------
int number ;
cout<<"Enter number:\t";
cin>>number;
//for(int i=0;i<number;i++)
//{
//	for(int j=0;j<i;j++)
//	{
//		cout<<i;
//	}
//	cout<<endl;
//}
//return 0;
//----------------------------------qno4----------------------------
for(int i=1;i<=number;i++){
	for(int j=0;j<=i;j++){
		cout<<j;
	}
	cout<<endl;
}
}