#include<iostream>
using namespace std;
class cubing
{
public:
    inline int cube(int x)
    {
        return x*x*x;
    }
};
int main()
{
cubing c;
cout<<c.cube(4);
}

