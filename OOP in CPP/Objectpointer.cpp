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
    Cricketer c1("Virat Kohli", 14673, 58.46);
    Cricketer* p1 = &c1; //Object pointer declaration
    cout << (*p1).name << "\n";
    cout << (*p1).runs << "\n";
    (*p1).runs = 16000; // changing details via object pointer 
    cout << (*p1).runs <<"\n"; 
}