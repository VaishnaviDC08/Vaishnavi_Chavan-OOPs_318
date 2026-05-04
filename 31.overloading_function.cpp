#include<iostream>
using namespace std;
class complex
{
public:
    void display(int var)
    {
       cout<<"integer number:= "<< var<<endl;
    }
 void display(float var)
    {
       cout<<"float number:= "<< var<<endl;
    }
 void display(int var1,float var2)
    {
       cout<<"float number:= "<< var2<<endl;
       cout<<"integer number:= "<< var1<<endl;
    }
};
int main()
{
    complex c;
 int a=5;
    float b=9;
    c.display(a);
    c.display(b);
    c.display(b,a);
    return 0;
}
