#include <iostream>
using namespace std;
int main () {
int n;
cout << " Enter any number : ";
cin >> n;
int product = 1;
while (n > 0){
    int ld = n % 10; // ld = last digit
    n = n/10;
    product = product * ld;
}
cout << "Product of all digits is : "<< product;
return 0;
}
