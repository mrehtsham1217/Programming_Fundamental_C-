#include<iostream>
using namespace std;

int main()
{
	string str1;
	string rev_str;
	cout<<"Enter string:\t";
	getline(cin,str1);
	for(int i=str1.length();i>=0;i--)
	{
//		rev_str  = rev_str + str1[i]; //dont add character in strings
		rev_str .push_back(str1[i]);//push back is build in function of strings in c++
	}
	cout<<rev_str ;
	return 0;
	
}