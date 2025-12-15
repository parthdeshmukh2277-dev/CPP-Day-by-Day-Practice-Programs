#include <iostream>
using namespace std;
class Student {
    int roll;
    string name;
public:
    // Constructor is used from here 
    Student(int r, string n) {
        roll = r;
        name = n;
    }
    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};
int main() {
    Student s1(101, "Parth");
    s1.display();
    return 0;
}
