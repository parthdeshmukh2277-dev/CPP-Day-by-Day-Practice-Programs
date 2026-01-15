#include <iostream>
using namespace std;
class Cricketer {
public :

string name;
int runs;
float avg;

Cricketer (string name, int runs, float avg){
    this -> name = name;
    this -> runs = runs;
    this -> avg = avg;
}

void print(){ //here we created a function inside the class
    cout << "Cricketer name : "<< name << "\n";
    cout << "Cricketer Runs : "<< name << "\n";
    cout << "Cricketer Average : "<< avg << "\n\n";
}
};
int main () {
    Cricketer c1("Virat Kohli", 14673, 58.46);
    Cricketer c2("Rohit Sharma", 11566,49.01);
    Cricketer c3("M S Dhoni", 10733,50.58);
    c1.print();
    c2.print();
    c3.print();
    return 0;
}