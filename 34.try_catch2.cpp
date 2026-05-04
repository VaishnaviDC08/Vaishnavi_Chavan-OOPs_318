#include<iostream>
using namespace std;
int main()
{
   try
   {
    int age=15;
    if(age>=18)
    {
        cout<<"access granted";
    }
    else
    {
        throw(age);
    }
}
catch(int myNum)
{
   cout<<"access denied";
   cout<<"age:"<<myNum;
}
}
