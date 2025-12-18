#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter any number : ";
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0) {
    cout << "The number entered is divisible by both 5 and 3";
    }
    else {
     cout << "The number entered is not divisible by both 5 and 3";
    }
    return 0;
}