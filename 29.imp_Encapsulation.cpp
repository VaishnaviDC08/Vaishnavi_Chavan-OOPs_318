#include <iostream>
using namespace std;

class Student
{
private:
    int rollNumber;
    string name;
    float marks;

public:
    // Function to set student details
    void setDetails(int r, string n, float m)
    {
        rollNumber = r;
        name = n;

        // Validation for marks
        if (m >= 0 && m <= 100)
            marks = m;
        else
        {
            cout << "Invalid marks! Setting marks to 0.\n";
            marks = 0;
        }
    }

    // Getter functions
    int getRollNumber()
    {
        return rollNumber;
    }

    string getName()
    {
        return name;
    }

    float getMarks()
    {
        return marks;
    }

    // Function to display details
    void display()
    {
        cout << "\nStudent Details:\n";
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    // Setting values
    s.setDetails(101, "Riya", 85);

    // Displaying values
    s.display();

    return 0;
}
