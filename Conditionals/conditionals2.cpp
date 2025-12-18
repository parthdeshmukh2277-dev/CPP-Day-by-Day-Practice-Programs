#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter any number : ";
    cin >> n;
    if (n > 99 & n <= 999)
    cout << "The number entered is a thee digit number";
    else
    cout << "The number entered is not a thee digit number";
    return 0;
}