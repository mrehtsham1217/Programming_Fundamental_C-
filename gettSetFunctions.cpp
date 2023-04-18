#include <iostream>
using namespace std;
// class Vehicle
// {
// private:
//     string vehicleName;
//     int model;

// public:
//     // set function for vehicle Name
//     void setName(string V_Name)
//     {
//         vehicleName = V_Name;
//     }
//     // getName
//     string getName()
//     {
//         return vehicleName;
//     }
//     void setModel(int Model)
//     {
//         model = Model;
//     }
//     // get part of model
//     int getModel()
//     {
//         return model;
//     }
// };
class Student
{
private:
    string name;
    int age;
    float cgpa;

public:
    void setName(string Name)
    {
        name = Name;
    }
    string getName()
    {
        return name;
    }
    void setAge(int Age)
    {
        age = Age;
    }
    int getAge()
    {
        return age;
    }
    void setCGPA(float Cgpa)
    {
        cgpa = Cgpa;
    }
    float getCgpa()
    {
        return cgpa;
    }
};
int main()
{
    // creation of object
    // Vehicle car;
    // car.setName("HONDA");
    // car.setModel(2019);
    // cout << car.getName();
    // cout << endl;
    // cout << car.getModel();
    Student std;
    std.setName("Ali");
    cout << std.getName() << endl;
    std.setAge(20);
    cout << std.getAge() << endl;
    std.setCGPA(3.5);
    cout << std.getCgpa();
}