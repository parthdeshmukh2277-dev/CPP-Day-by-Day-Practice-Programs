#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    cout << "Enter the third number : ";
    cin >> c;
    if (a > b) {
        if (a > c) {
        cout << "The greatest number is : " << a;
        }
        else {
            cout << "The greatest number is : " << b;
        }
    }
          else {
            if (b > c) {
            cout << "The greatest number is : " << b;  
            }    
        else {
        cout << "The greatest number is : " << c;
        }
    }

}