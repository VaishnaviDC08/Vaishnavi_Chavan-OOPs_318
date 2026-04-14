//Demonstrate single,multiple and multilevel inheritance
#include<iostream>
using namespace std;

class Base
{
 public:
     int x;

};

class Base2
{
 public:
     int y;

};
class derived1:public Base //single inheritance
{
public:

     getx(int a)
     {
         x=a;
     }

    display()
    {
     cout<<"single inheritance:"<<x<<endl;
    }
};

class derived2:public Base, public Base2 //multiple inheritance
{
public:

     getx(int a)
     {
         x=a;
     }
       gety(int b)
     {
         y=b;
     }
    display()
    {
     cout<<"multiple inheritance:"<<x<<"  "<<y <<endl;
    }
};

class derived3:public derived2 //multilevel inheritance
{
public:
    int z;
       getz(int c)
     {
         z=c;
     }
    display()
    {
     cout<<"multilevel inheritance:"<<x<<"  "<<y <<"  "<<z<<endl;
    }
};
int main()
{
    derived1 d1;
    d1.getx(41);
    d1.display();

    derived2 d2;
    d2.getx(21);
    d2.gety(34);
    d2.display();

    derived3 d3;
    d3.getx(33);
    d3.gety(43);
    d3.getz(53);
    d3.display();

    return 0;
}
