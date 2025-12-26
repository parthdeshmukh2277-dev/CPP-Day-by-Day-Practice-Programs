#include <iostream>
using namespace std;
int main () {
int x,y;
cout << " x = ";
cin >> x;
cout << " y = ";
cin >> y;
int temp;
temp = x;
x = y;
y = temp;
cout << "Swaped values are : " << x << "," << y;
}