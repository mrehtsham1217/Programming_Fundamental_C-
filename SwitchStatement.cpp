#include<iostream>
using namespace std;

int main()
{
//	cout<<"Switch statement in c++";
//int num1;
//int num2;
//char choice;
//cout<<"Enter first number\t";
//cin>>num1;
//cout<<"Enter 2nd number\t";
//cin>>num2;
//cout<<"Enter your choice +,-,*,/";
//cin>>choice;
//
//switch(choice)
//{
//	case '+':
//		cout<<"Sum of the two numbers \t"<<num1 + num2;
//		break;
//		case '-':
//			cout<<"Subtraction of two numbers:\t"<<num1 - num2;
//			break;
//			case '*':
//				cout<<"Multiplication of two numbers:\t"<<num1* num2;
//				break;
//				case '/':
//					cout<<"Division of two numbers:\t"<<num1/num2;
//					break;
//					default:
//					cout<<"Invalid choice";
//}

char alphabets;
cout<<"Enter any charactaer:\t";
cin>>alphabets;

switch(alphabets)
{
	case 'a':case 'A':
		cout<<"Vowels";
		break;
		case 'e': case 'E':
			cout<<"Vowels";
			break;
			case 'i': case 'I':
				cout<<"Vowels";
				break;
				case 'o': case 'O':
					cout<<"Vowels";
					break;
					case 'u':case 'U':
						cout<<"Vowels";
						break;
						default:
							cout<<"Consonants";
							
}







	return 0;
}