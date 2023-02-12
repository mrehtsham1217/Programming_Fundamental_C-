//1.Write a function which input a character and tells
 //whether it is a small letter of large letter and not a letter
#include<iostream>
using namespace std;
//void Character(char ch)//function definition
////01 return type
////02 function name
////03 parameters
//{
//	cout<<"Enter a character:\t";
//	cin>>ch;
//	if(ch>='a' && ch<='z')
//	{
//		cout<<"Small alphabets";
//	}
//	else if(ch>='A' && ch <='Z')
//	{
//		cout<<"Capital letters";
//	}
//	else
//	{
//	cout<<"NOt a letter";
//	}
//}//function ended
//-------------------------------QNO2------------------------
//Write a function which take the radius of circle 
//and return the area of circle
//float Area(float radius)
//{
//	cout<<"Enter radius:\t";
//	cin>>radius;
//	int area = 3.14 * radius * radius;
//	return area;
//}
//-------------QNO3--------------------------
/*Write a function, which takes two arguments, first char 
and second int; prints a rectangle of char of size int. Call this
function in main two times with variable and constants*/

//parameters has second name arguments
void Rectangle(char ch, int size)
{
	for(int i=1;i<=size;i++)
	{
		for(int j=1;j<=size;j++)
		{
			if(i==1 || i==size || j==1 || j==size)
			{
				cout<<ch;
			}
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
//-------------------------QNO5----------------------------
/*5.write a function which take the radius of circle
 as first argument and a char (a or c) as second argument.
 If second argument
is a then return the area of circle. 
If the second argument is c then return the circumference of circle*/
//---------------------------qno4-----------------------------------
/*4. Input five number between 1-20 using a loop and 
print # by passing these number to a function.

*/
int main()
{
	//-----------------QNO1----------------------------
//	char chh;//name can be different
//	Character(chh);

//-------------------------	qno2----------------------
//float radius;
//cout<<Area(radius);//function calling
//-------------------QNO3------------------------------------

char ch;
int size;
cout<<"Enter character:\t";
cin>>ch;
cout<<"Enter size\t";
cin>>size;
Rectangle(ch,size); 


}