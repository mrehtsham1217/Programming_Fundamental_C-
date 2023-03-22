#include <iostream>
using namespace std;

int main()
{
    //declare an array for serries
    int number;
    cout<<"Enter term of series:\t";
    cin>>number;
    int Array[number];//array for series
    Array[0] = 0;//first term of series
    Array[1] = 1;//second term of series
    //for loop to display next terms in series
    for(int i = 2;i<number;i++)
    {
    	Array[i] = Array[i-1] + Array[i-2];
	}
	//displaying of Fibionacchis series
	cout<<"\n Displaying of Fibionachi series \n";
	for(int i=0;i<number;i++)
	{
		cout<<Array[i]<<" ";
	}
	cout<<"\n";
    return 0;
}
