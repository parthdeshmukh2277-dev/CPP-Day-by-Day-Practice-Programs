#include <iostream>
using namespace std;
class Car {
    public:
    string name;
    string type;
    float seat;
    int price;
    void print(){ 
    cout << "Car Name : " << name << "\n";
    cout << "Car Type : " << type << "\n";
    cout << "Car Seats : " << seat << "\n";
    cout << "Car Price : " << price << "\n"; 
    }
};
int main () {
    Car c1;
    c1.name = "XUV 700";
    c1.type = "SUV";
    c1.seat = 7;
    c1.price = 1500000;
    c1.print();

    Car c2;
    c2.name = "Maruti Swift";
    c2.type = "Hatchback";
    c2.seat = 5;
    c2.price = 600000;
    c2.print();

    Car c3;
    c3.name = "Honda City";
    c3.type = "Sedan";
    c3.seat = 5;
    c3.price = 1200000;
    c3.print();
}