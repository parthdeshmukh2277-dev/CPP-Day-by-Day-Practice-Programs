#include <iostream>
using namespace std;
void india () {
    cout << "You are in India" << "\n";
}
void usa () {
    india (); //here we called india () function 
    cout << "You are in USA" << "\n";
}
int main () {
    usa();
}