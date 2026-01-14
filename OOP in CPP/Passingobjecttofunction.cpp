#include <iostream>
using namespace std;
class Car {
    public:
    string name;
    string type;
    float seat;
    int price;
};
void print(Car c){ 
    cout << "Car Name : " << c.name << "\n";
    cout << "Car Type : " << c.type << "\n";
    cout << "Car Seats : " << c.seat << "\n";
    cout << "Car Price : " << c.price << "\n"; 
}
int main () {
    Car c1;
    c1.name = "XUV 700";
    c1.type = "SUV";
    c1.seat = 7;
    c1.price = 1500000;

    Car c2;
    c2.name = "Maruti Swift";
    c2.type = "Hatchback";
    c2.seat = 5;
    c2.price = 600000;

    Car c3;
    c3.name = "Honda City";
    c3.type = "Sedan";
    c3.seat = 5;
    c3.price = 1200000;
    print(c1);
    print(c2);
    print(c3);
}