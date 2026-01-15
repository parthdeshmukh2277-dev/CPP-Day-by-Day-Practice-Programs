#include <iostream>
using namespace std;
class Cricketer {
    public :
    string name;
    int runs;
    Cricketer(string name, int runs){
    this -> name = name; //this keyword
    this -> runs = runs; //this keyword
    }
};
void print (Cricketer c) {
    cout << "Cricketer name : "<< c.name << "\n";
    cout << "Cricketer Runs : "<< c.runs << "\n\n";
}
int main () {
    Cricketer c1("Virat Kohli", 14673);
    Cricketer c2("Rohit Sharma", 11566);
    Cricketer c3("M S Dhoni", 10733);
print(c1);
print(c2);
print(c3);
return 0;
}