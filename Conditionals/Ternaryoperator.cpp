#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter any Number : ";
    cin >> n;
    // now we will use ternary operator here whose syntax is
    // condition ? if true : if false ; 
    (n%2 == 0) ? cout << "Number is even" : cout << "Number is odd";
    return 0;
}