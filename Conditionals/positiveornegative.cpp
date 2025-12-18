#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (n>0) {
        cout << "Entered number is positive";
    }
    else if (n<0) {
        cout << "Entered number is negative";
    }
    else {
        cout << "Entered number is zero";
    }
    return 0;
}