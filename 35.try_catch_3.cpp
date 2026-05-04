//write a cpp program to read roll number, name and subject marks of a student and implement suitable exceptional handling methods to validate the input also add age //(>18)
#include<iostream>
using namespace std;
int main()

{
   try
   {
    int roll_no=15;
    string name= "Riya";
     int age=15;
     int marks=15;
    if(roll_no>0)
    {
        cout<<"\nvalid roll number";
    }
    else
    {
        throw(roll_no);
    }
    if(name != "Riya")
    {
        cout<<"\nValid name";
    }
    else
    {
        throw(name);
    }
    if(age>=18)
    {
        cout<<"\naccess granted";
    }
    else
    {
        throw(age);
    }
    if(marks>=35)
    {
        cout<<"\nPassed";
    }
    else
    {
        throw(marks);
    }
}
catch(int myNum,string myName,int myNum, int myMarks )
{
{
   cout<<"\ninvalid roll number";
   cout<<"roll_no:"<<myNum;
}
{
   cout<<"\ninvalid name";
   cout<<"Name:"<<myName;
}
{
   cout<<"\naccess denied";
   cout<<"age:"<<myNum;
}

{
   cout<<"\nFailed";
   cout<<"Marks:"<<myMarks;
}
}
}




#include<iostream>
using namespace std;

int main()
{
    int roll_no, age, marks;
    string name;

    try
    {
        // Input
        cout << "Enter Roll Number: ";
        cin >> roll_no;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Marks: ";
        cin >> marks;

        // Validation
        if (roll_no <= 0)
            throw roll_no;

        if (name.empty())
            throw name;

        if (age < 18)
            throw age;

        if (marks < 35)
            throw marks;

        // If all valid
        cout << "\nAll inputs are valid!";
        cout << "\nAccess Granted";
    }

    // Different catch blocks
    catch (int r)
    {
        if (r <= 0)
            cout << "\nInvalid Roll Number!";
        else if (r < 18)
            cout << "\nAccess Denied! Age must be 18+";
        else
            cout << "\nFailed! Marks less than 35";
    }

    catch (string n)
    {
        cout << "\nInvalid Name!";
    }

    return 0;
}
