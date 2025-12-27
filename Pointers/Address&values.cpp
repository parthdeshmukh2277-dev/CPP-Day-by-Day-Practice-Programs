#include <iostream>
using namespace std;
int main () {
    int x = 3;
    int* ptr = &x;
    cout << &x << "\n";
    cout << ptr << "\n";
    cout << x << "\n";
    cout << *ptr;
}