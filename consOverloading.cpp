#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int age;
    double cnic;

public:
    person(string name, int age, double cnic);
    person(string name);
    person(int age);
    person(double cnic);
    void print();
};
// parameterized constructor with all arguments
person::person(string name, int age, double cnic)
{
    if (name.length() < 10)
        this->name = name;
    else
        cout << "Size increased";
    this->age = age;
    this->cnic = cnic;
}
// constructor with name
person::person(string name)
{
    if (name.length() < 10)
        this->name = name;
    else
        cout << "Size increased";
}
person::person(int age)
{
    this->age = age;
}
person::person(double cnic)
{

    this->cnic = cnic;
}
void person::print()
{
    cout << "----------------------------\n";
    cout << "Name:\t" << name << endl;
    cout << "Age:\t" << age << endl;
    cout << "CNIC:\t" << cnic << endl;
}

int main()
{
    person p("Aliiiiiiiii", 25, 1234);
    person p2("Aliiiiiiiiiii");
    person p3(30);
    person p4(334);
    p.print();
    p2.print();
    p3.print();
    p4.print();
}
