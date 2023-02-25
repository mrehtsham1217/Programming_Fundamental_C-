#include<iostream>
#include<cstdlib>//header file for random number
#include<ctime>//header file for time changing
using namespace std;

int main()
{
	srand(time(NULL));
//	int random;
//	random = 1 + rand()%100;
//	cout<<random;

//idea for dice game----->Ludo game
int random;
for(int i=1;i<=6;i++)
{
	random = 1+rand()%6;
	cout<<random<<"\n";
	system("pause");//wait for action by keyboard----->
}

}