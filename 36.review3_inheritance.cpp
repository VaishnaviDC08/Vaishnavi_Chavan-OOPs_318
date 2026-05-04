//3. Implement a base class Person. Derive classes Student and Instructor from Person. A person has a name and a birthday. A student has a major, and an instructor has a salary.
//Write the class definitions, the constructors,and the member functions print() for all classes.
#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    string birthday;

public:
    // Constructor
    Person(string n, string b)
    {
        name = n;
        birthday = b;
    }

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Birthday: " << birthday << endl;
    }
};

// Derived class: Student
class Student : public Person
{
private:
    string major;

public:
    // Constructor
    Student(string n, string b, string m) : Person(n, b)
    {
        major = m;
    }

    void print()
    {
        Person::print();   // scope resolution used here
        cout << "Major: " << major << endl;
    }
};

// Derived class: Instructor
class Instructor : public Person
{
private:
    int salary;

public:
    // Constructor
    Instructor(string n, string b, int s) : Person(n, b)
    {
        salary = s;
    }

    void print()
    {
        Person::print();   // scope resolution used here
        cout << "Salary: " << salary << endl;
    }
};

// Main function
int main()
{
    Student s("Riya", "10-05-2003", "Computer Science");
    Instructor i("Vinayak", "15-08-1980", 75000);

    cout << "Student Details:\n";
    s.print();

    cout << "\nInstructor Details:\n";
    i.print();

    return 0;
}
