//uding the assign() method
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    str.assign("Hello, World");
    cout<<str<<endl;

    str.assign("Hello, Universe",7,8);
    cout<<str<<endl;
    string other = "C++ Programming";
    str.assign(other,4 ,11);
    cout<<str<<endl;
    return 0;
}
