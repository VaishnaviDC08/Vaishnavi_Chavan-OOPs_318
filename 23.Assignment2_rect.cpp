#include<iostream>
using namespace std;
class rectangle
{
private:
    float l;
    float b;
public:
    void data()
    {
        cout<<"length= ";
        cin>>l;
        cout<<"breadth=";
        cin>>b;
    }
    void area()
    {
        cout<<"area="<<l*b<<endl;
    }

};
int main()
{
    rectangle r1;
    r1.data();
    r1.area();
}
