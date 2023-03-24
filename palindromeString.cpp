#include<iostream>
using namespace std;
int isPlaindrome(string str1)
{
	int length = str1.length();
	for(int i=0;i<length/2;i++)
	{
		if(str1[i] == str1[length-i-1])
		{
			return 1;
		}
		else
		return 0;
	}
}

int main()
{
	string str1;
	cout<<"Enter string:\t";
	getline(cin,str1);
//	cout<<isPlaindrome(str1); 
	if(isPlaindrome(str1))
	cout<<"String is palindrome:\n";
	else
		cout<<"string is not palindrome\n";
		//another logic
//		reverse the string
//if orignal string == reverse string
//string is palindrome
//otherwsie string is not palindrome
	 

}