#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int age;
    float cgpa;

public: // Access Modifier
        // public part of class must consist of fucntions
    // function for set data---->data asign
    void setData(string Name, int Age, float Cgpa)
    {
        name = Name; // int x = 5;
        age = Age;   // int age = 20
        cgpa = Cgpa;
    }
    // display function
    void display() // display function
    {
        cout << "Name:\t" << name << endl;
        cout << "Age:\t" << age << endl;
        cout << "Cgpa:\t" << cgpa << endl;
        cout << "--------------------------------------\n";
    }
}; // end of class

int main()
{
    // Object create
    // first write class name and than object name
    // Creation of object
    Student obj1; // first object creation
    Student obj2; // 2nd object
    obj1.setData("Ali", 20, 3.5);
    // obj1.name = "Ali";
    // obj1.age = 20;
    // obj1.cgpa = 3.5;
    // we will call the function by using object name
    // obj1.display();                  // display function for ist object
    obj2.setData("Rizwan", 22, 3.3); // set function is calling
    // obj2.name = "Rizwan";
    // obj2.age = 23;
    // obj2.cgpa = 3.3;
    obj2.display();
}