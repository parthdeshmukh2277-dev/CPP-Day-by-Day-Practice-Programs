#include <iostream>
using namespace std;
int main () {
    int x = 4;
    int* ptr = &x;
    *ptr = 9;
    cout << x;
}