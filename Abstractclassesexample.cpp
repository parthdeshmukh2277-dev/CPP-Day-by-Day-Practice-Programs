#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area() = 0;
};

class Rectangle : public Shape {
    int length, breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};
int main() {
    Shape* s;
    Rectangle r(5, 4);
    s = &r;
    s->area();
    return 0;
}
