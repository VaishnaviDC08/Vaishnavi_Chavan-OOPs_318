#include<iostream>
using namespace std;
class div
{
    int a=5;
    int b=0;
public:
    int divide (int x, int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"value= "<< a/b;
    }

};
int main()
{
div d;
d.divide(5,0);
d.display();
return 0;
}
