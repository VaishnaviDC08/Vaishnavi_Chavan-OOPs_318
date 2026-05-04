#include<iostream>
using namespace std;
class Complex
{
    int a,b;
public:
    void setdata(int x, int y)
    {
    a=x;
    b=y;
    }
    void showdata()
    {
        cout<<"\na="<<a<<"\nb="<<b;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1+c2;
    c3.showdata();
}


