#include<iostream>
using namespace std ;
int main () {
    float a;
    cin >> a;
    char op;
    cin >> op;
    float b;
    cin >> b;
    if (op == '+' )
    cout << a + b;
    if (op == '-' )
    cout << a - b;
    if (op == '*' )
    cout << a * b;
    if (op ==  '/' )
    cout << a / b;
return 0;
}