#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter any number : ";
    cin >> n;
    int product = 1;
    for (int i = 1; i<=n; i++) {
        product = product * i; 
    }
    cout << "Factorial of entered number is : " << product;
    return 0;
}