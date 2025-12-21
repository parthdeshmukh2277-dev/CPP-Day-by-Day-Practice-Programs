#include <iostream>
using namespace std;
int main () {
int n;
cout << " Enter any number : ";
cin >> n;
int sum = 0;
while (n > 0){
    int ld = n % 10; // ld = last digit
    n = n/10;
    sum = sum + ld;
}
cout << "Sum of all digits is : "<< sum;
return 0;
}
