#include <iostream>
using namespace std;
int main() {
char a,b;
cout << "First number : ";
cin >> a;
cout << "Second number : ";
cin >> b;
(a > b ) ? cout << "Greatest number is " << a : cout << "Greatest number is " << b; 
return 0;
}