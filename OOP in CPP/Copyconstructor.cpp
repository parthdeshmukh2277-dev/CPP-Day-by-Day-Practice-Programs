#include <iostream>
using namespace std;
class Student {
    public :
    string name;
    float gpa;
    int roll;
    
Student (string n, int r, float g){
    name =n;
    roll =r;
    gpa = g;
}
};
void print(Student s){
    cout << "Student name : " << s.name << "\n";
    cout << "Student roll : " << s.roll << "\n";
    cout << "Student cgpa : " << s.gpa << "\n\n";
}
int main() {
Student s1("Parth Deshmukh", 65, 8.2);
Student s2("Swaraj Morey", 79, 7.8);
Student s3 = s1; //this is copy constructor all data of s1 will be copied here via constructor
Student s4(s1); //this is also a way to initialize copy constructor all data of s1 will be copied here via constructor
s4.name = "Gagan Dube"; // we can also change values even if it is using constructor call
s4.roll = 43;
print(s1);
print(s2);
print(s3);
print(s4);
}