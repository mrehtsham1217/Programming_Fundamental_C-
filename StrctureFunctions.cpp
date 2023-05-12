#include<iostream>
using namespace std;
struct Patient
{
	string pName;
	string disease;
	int days;
	string DrName;
	
};
void GetData(Patient &pat)//must declare instance in functions
{
	cout<<"Enter patient Name:\t";
	cin>>pat.pName;
	cout<<"Enter disease:\t";
	cin>>pat.disease;
	cout<<"Enter admision days:\t";
	cin>>pat.days;
	cout<<"Dr name:\t";
	cin>>pat.DrName;
	
}
void Output(Patient &pat)
{
	cout<<pat.pName<<endl;
	cout<<pat.disease<<endl;
	cout<<pat.DrName<<endl;
	cout<<pat.days<<endl;
	
}
int main()
{
	Patient p;//instance of patient strcture
	//strutures aur functions
	GetData(p);
	Output(p);  
	
}