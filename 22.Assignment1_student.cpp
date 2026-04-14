#include<iostream>
using namespace std;
class student
{
private:
    int id;
    char name[10];
    int marks;
public:
    void data()
    {
    cout<<"id=";
    cin>>id;
    cout<<"name=";
    cin>>name;
    cout<<"marks=";
    cin>>marks;
    }
    void display()
    {
        cout<<"id="<<id<<endl;
        cout<<"name="<<name<<endl;
        cout<<"marks="<<marks<<endl;
    }
};
int main()
{
    student s;
   s.data();
   s.display();
}
