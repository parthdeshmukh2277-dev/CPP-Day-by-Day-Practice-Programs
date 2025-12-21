#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter any number : ";
    cin >> n;
    cout << "Reverse of entered number is : ";
    int sum = 0;
    while (n>0) {
        int ld = n % 10;
        n = n/10;
        sum = sum + ld;
        cout << ld;
    }
    cout << "\n" << "Sum of all digits is : " << sum;
    return 0;
}