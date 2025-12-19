#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter n : ";
    cin >> n;
    // print AP 4,7,10,13.........'n'
    // we know Arithmatic progression formula is a + (n-1)*d
    // a = first term = 4
    // d is differnce = 3
    // n is nth term (user input) 
    // thus, AP = 4 + (n-1)3 = 4 + 3*n - 3 = 3*n + 1
    for(int i = 4; i <= 3*n + 1; i = i+3 ) {
        cout << i << ",";
    }
    return 0;
}