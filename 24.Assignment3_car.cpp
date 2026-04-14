#include<iostream>
using namespace std;

class Car
{
private:
    string brand;
    int speed;

public:
    void setData(string b, int s)
    {
        brand = b;
        speed = s;
    }

    void displayData()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main()
{
    Car c1, c2;

    c1.setData("Toyota", 120);
    c2.setData("Honda", 100);

    cout << "Car 1:\n";
    c1.displayData();

    cout << "\nCar 2:\n";
    c2.displayData();

    return 0;
}
