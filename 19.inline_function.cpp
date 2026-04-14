//inline functions
#include<iostream>
using namespace std;
inline double cube(double s)
{
    return s *s* s ;
}
int main()
{
    cout<<"The cube of 3 is: " << cube (3.0)<<"\n";
    cout<<"The cube of 4 is: " << cube (2.5+1.5) << "\n";
    return 0;
}
