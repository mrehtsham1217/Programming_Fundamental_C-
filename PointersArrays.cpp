#include <iostream>
using namespace std;

int main()
{
//	int array[5] = {2,3,4,5,6};//first step
//	int *ptr;//pointer declaration
//	pointer will store the address of array
	//ptr = array;// array addresss should be stored in pointer
//	cout<<*ptr<<endl;
//	ptr++;
//	cout<<*ptr<<endl;
//	ptr++;
//	cout<<*ptr<<endl;
//	ptr++;
//	cout<<*ptr<<endl;
//	ptr++;
//	cout<<*ptr<<endl;
///--------------------another way to access array
//cout<<*ptr<<endl;
//cout<<*(ptr+1)<<endl;
//cout<<*(ptr+2)<<endl;
//cout<<*(ptr+3)<<endl;
//cout<<*(ptr+4)<<endl;
//	

//-----how to access array element by pointers using for loop
//for(int i=0;i<5;i++)
//{
//	cout<<*ptr++<<"\t";
////	ptr++;
//}


//how to reverse an array ny using pointers
//int array[5] = {3,4,5,6,7};//7,6,5,4,3
//int *ptr;
//ptr = &array[4];//pass the address of last index of arrray
//for(int i =0;i<5;i++ )
//{
//	cout<<*ptr--<<"\t";
//}


char array[30];
char *ptr;
cout<<"Enter character array:\t";
gets(array);//gets is also used to get input from user

ptr = array;//save the address of array in pointers
for(int i=0;array[i]!='\0';i++)
	
{
cout<<*ptr++;
}




    



}