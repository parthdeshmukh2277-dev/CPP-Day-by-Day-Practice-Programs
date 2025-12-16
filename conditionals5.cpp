#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter third number : ";
    cin >> c;
    if (a > b & c)
    cout << a << " is greatest";
    else if (b > c & a)
    cout << b << " is greatest";
    else 
    cout << c << " is greatest";
    return 0;
} 