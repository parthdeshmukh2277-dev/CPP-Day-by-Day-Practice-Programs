#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter any Number : ";
    cin >> n;
    cout << "Highest Factor of the entered number is : ";
    int a = 1;
    for (int i = 1; i < n; i++){
        if (n%i == 0) a = i;
    }
    cout << a;
    return 0;
}