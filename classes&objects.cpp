#include <iostream>
using namespace std;
class Car {
public:
    string brand;
    int year;

    void start() {
        cout << brand << " is starting..." << endl;
    }
};
int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.year = 2020;

    Car c2;
    c2.brand = "Honda";
    c2.year = 2018;
    c1.start();
    c2.start();

    return 0;
}