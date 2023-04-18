#include <iostream>
using namespace std;
class University
{
private:
    string location;
    string name;
    string campus;

public:
    // default constructor
    // parameterize constructor
    // print function
    // just declaration of functions
    University();
    University(string location, string name, string campus);
    void printdata();
};
// Scope resoltion operator
// ist step--->Return type of functions
// 2nd Clas name----->
University::University()
{
    cout << "Defaults constructor" << endl;
}
University::University(string location, string name, string campus)
{
    // this----keyword in OOP
    this->location = location;
    this->name = name;
    this->campus = campus;
}
void University::printdata()
{
    cout << "Location:\t" << location << endl;
    cout << "Name:\t" << name << endl;
    cout << "Campus:\t" << campus << endl;
}

int main()
{
    University obj1("Lahore", "Pubjab University", "Lahore");
    obj1.printdata();
}