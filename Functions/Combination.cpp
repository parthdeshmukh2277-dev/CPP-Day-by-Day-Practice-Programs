#include <iostream>
#include <cmath>
using namespace std;
int fact (int x) {
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f = f*i;
    }
    return f;
}
int main () {
int n,r;
cout << "Enter n : ";
cin >> n;
cout << "Enter r : ";
cin >> r;
int a = fact(n); //this is for n!
int b = fact(r); //this is for r!
int c = fact(n-r); //this is for (n-r)!
cout << a/(b*c);
}