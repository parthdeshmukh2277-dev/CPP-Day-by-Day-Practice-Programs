#include <iostream>
using namespace std;

void increment(int &x) {
    x = x + 1;
}
int main() {
    int n = 5;
    increment(n);
    cout << "Value = " << n;
    return 0;
}
