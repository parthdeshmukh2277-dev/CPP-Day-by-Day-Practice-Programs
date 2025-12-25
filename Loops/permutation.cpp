#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n,r;
    cout<< "Enter n :";
    cin >> n;
    cout<< "Enter r :";
    cin >> r;
    int a = 1;
    for(int i = 1; i<=n; i++){
        a = a*i;
    }
    int b = 1;
    for(int i = 1; i<=n-r; i++){
        b = b*i;
    }
    cout << a/b;
    return 0;
}