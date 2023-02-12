#include<iostream>
#include<math.h>
using namespace std;
//-----------------------function decalration-----------------------------
//first step----->return type 
//second step---->function name---->valid
//third step----->parameters----->
void Display()//-----first type
{
	//body
	cout<<"Welcome to functions in C++"<<endl;
}
//------------Square function------------------------
int Square(int number)
{
	return number * number;
}
//------------third example-----------------
int Square2()
{
	int number = 10;
	return number * number;
}

int main()//main body of program
{
	int num = 10;
//	cout<<"The square root of 100 is:\t"<<sqrt(100)<<endl;
//	cout<<"The mnimum number is:\t "<<min(2,4)<<endl;
//	cout<<"The max number is:\t"<<max(4,6)<<endl;
Display();
Display();
Display();
Display();

//callling of sqare function----------------->>

cout<<Square(num);
cout<<endl;
//calling square 2 function--------------------------
cout<<Square2(); 
	return 0;
}