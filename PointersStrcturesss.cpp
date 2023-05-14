#include<iostream>
using namespace std;
//first step to create strctures
struct Time
{
	string hours;
	int minutes;
	float seconds;
	
};//strcture end
//input functions
void Input(Time *time)
{
	cout<<"ENter hours in time:\t";
	cin>>time->hours;
	cout<<"Enter minutes:\t";
	cin>>time->minutes;
	cout<<"ENter Seconds:\t";
	cin>>time->seconds;
}
//------output  functons--------------
void Output(Time *time)
{
	cout<<time->hours<<endl;
	cout<<time->minutes<<endl;
	cout<<time->seconds<<endl;
}

int main()
{
	//pointers and strctures
	Time time;//create strcture instance or variables
	//---------function callings--------------------//
	Input(&time);//must use & operator for function calling using strctures and pointes  
	Output(&time);//must use & operator for function calling using strctures and pointes  
}