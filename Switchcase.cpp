#include<iostream>
using namespace std ;
int main () {
    float a;
    cin >> a;
    char op;
    cin >> op;
    float b;
    cin >> b;
    switch(op) {
        case '+' :
        cout << a + b;
        break;
        case '-' :
        cout << a - b;
        break;
        case '*' :
        cout << a * b;
        break;
        case '/' :
        cout << a / b;
        break;
        default :
        cout << "invalid";
    }
    return 0;
}