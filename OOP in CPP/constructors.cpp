#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float gpa;
    
    Student(string n, int r, float g) {
        name = n;
        roll = r;
        gpa = g;
    }
};
    void print(Student s){
        cout<< "Student name : " << s.name << "\n";
        cout<< "Student roll no. : " << s.roll << "\n";
        cout<< "Student cgpa : " << s.gpa << "\n";
    }
int main () {
    Student s1("Parth Deshmukh", 45, 8.2);
    Student s2("Swaraj Morey", 56, 7.1);
    Student s3("Om Kale", 38, 6.8);
    Student s4("Ayush Ghuley", 45, 5.1);
    print(s1);
    print(s2);
    print(s3);
    print(s4);
}