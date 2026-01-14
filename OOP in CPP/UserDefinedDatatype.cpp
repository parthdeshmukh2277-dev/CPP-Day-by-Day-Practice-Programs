#include <iostream>
using namespace std;
    class Student { //student is new data type
    public:
        string name;
        int roll;
        int age;
        float cgpa;   
    };
    int main () {
        Student s1;
        s1.name = "Parth Deshmukh";
        s1.roll = 24;
        s1.age = 21;
        s1.cgpa = 8.4;

        Student s2;
        s2.name = "Swaraj Morey";
        s2.roll = 76;
        s2.age = 21;
        s2.cgpa = 5.4;
        cout << s1.name << "\n" << s1.roll << "\n" << s1.age << "\n" << s1.cgpa << "\n";
        cout << s2.name << "\n" << s2.roll << "\n" << s2.age << "\n" << s2.cgpa << "\n";
    }