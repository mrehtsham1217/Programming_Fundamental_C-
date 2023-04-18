#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int RollNO;
    float cgpa;

public:
    // default constructor
    // name--->class name
    Student()
    {
        // Default constructor has no parameters
        cout << "Default constructor has no parameters" << endl;
        name = " ";
        RollNO = 0;
        cgpa = 0.0;
    }
    // parameter constructor
    Student(string TheName, int regNo, float gpa)
    {
        name = TheName;
        RollNO = regNo;
        cgpa = gpa;
    }
    void print()
    {
        cout << "Name is:\t" << name << endl;
        cout << "RollNO is:\t" << RollNO << endl;
        cout << "Cgpa is:\t" << cgpa << endl;
    }
};
class car
{
private:
    string carname;
    string model;
    string capacity;

public:
    car() {}
    // parameterized constructor
    car(string name, string Model, string Capacity)
    {
        carname = name;
        model = Model;
        capacity = Capacity;
    }
    void printdata()
    {
        cout << "Car name:\t" << carname << endl;
        cout << "Mode\t" << model << endl;
        cout << "Capacity\t" << capacity << endl;
    }
};
int main()
{
    // creating object
    // automatically call
    // Student std;
    // std.print();
    // cout << endl;
    // Student std2("Ali", 1200, 3.5);
    // std2.print();
    car obj("Honda", "2020", "2000");
    obj.printdata();
}
