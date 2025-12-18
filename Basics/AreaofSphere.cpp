#include <iostream>
using namespace std;
int main() {
    float pi = 3.14159265359, r, Area;
    cout << "Enter the Value of Radius :\n";
    cin >> r;
    Area = 4*pi*r*r;
    cout << "Area of Sphere is :\n" << Area;
    return 0;
}