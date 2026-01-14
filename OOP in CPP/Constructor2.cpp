#include <iostream>
using namespace std;
class Car{
public:
string name;
string type;
int seat;
int price;

Car(string n, string t, int s, int p){
    name = n;
    type = t;
    seat = s;
    price = p;
}
};
void print(Car c){
        cout << "Car name : " << c.name <<"\n";
        cout << "Car type : " << c.type <<"\n";
        cout << "Car seat : " << c.seat <<"\n";
        cout << "Car price : " << c.price <<"\n\n";
    }

int main () {
Car c1("XUV 700", "SUV", 7,1500000);
Car c2("Maruti Swift", "Hatchback", 5,600000);
Car c3("Honda city", "Sedan", 5,1200000);

print(c1);
print(c2);
print(c3);

}