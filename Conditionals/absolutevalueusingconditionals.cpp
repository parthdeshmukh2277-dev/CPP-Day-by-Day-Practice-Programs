#include <iostream>
using namespace std;
int main () {
    int a;
    cout << "Enter any Number : ";
    cin >> a;
    if (a<0) a = -a;
    cout << a;
}
