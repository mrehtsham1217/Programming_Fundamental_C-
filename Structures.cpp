#include<iostream>
using namespace std;

struct Student
{
	string regNO;
	int marks;
	float cgpa;
	string department;
};
struct Book
{
	string BookName;
	string Author;
	int pages;
	int prices;
	
};
int main()
{
	Student std;//declare instances of strcture
	Input(std); 
	output(std); 
//	Book book;//must declare to access structure
//	book.BookName = "40 rules of love";
//	book.Author = "XYZ";
//	book.pages = 300;
//	book.prices = 1000;
//	cout<<"\n---------------Book Strcture---------------------\n";
//	cout<<book.BookName<<endl;
//	cout<<book.Author<<endl;
//	cout<<book.pages<<endl;
//	cout<<book.prices<<endl;
//	std.regNO = "CS1200";
//	std.marks = 500;
//	std.cgpa  = 3.0;
//	std.department = "Computer science";
//-------------user input in strctures------------------------
cout<<"\n-------------------Student data----------------\n";

//cout<<"ENter RegNO:\t";
//cin>>std.regNO;
//cout<<"Enter MArks:\t";
//cin>>std.marks;
//cout<<"Enter cgpa:\t";
//cin>>std.cgpa;
//cout<<"Department:\t";
//cin>>std.department;
	
	//displaying through strctures
//	cout<<"RegNO:\t"<<std.regNO<<endl;
//	cout<<"Marks:\t"<<std.marks<<endl;
//	cout<<"CGPA:\t"<<std.cgpa<<endl;
//	cout<<"Department:\t"<<std.department<<endl;

	
}