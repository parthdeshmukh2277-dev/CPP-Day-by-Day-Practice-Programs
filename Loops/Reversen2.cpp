#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter any number : ";
    cin >> n;
    while(n > 0) {
        int ld = n % 10;
        n = n / 10;
        cout << ld ;
    }
    return 0;
}