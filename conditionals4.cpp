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
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    cout << "Entered values can make a valid triangle";
    else
    cout << "Entered values will make an invalid triangle";
    return 0;
} 