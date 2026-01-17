#include <iostream>
using namespace std;
class Cricketer{
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

int main() {
    Cricketer* c1 = new Cricketer("Virat Kohli", 14673, 58.46);
    cout << (*c1).name << "\n"; //Dynamic memory allocation
}