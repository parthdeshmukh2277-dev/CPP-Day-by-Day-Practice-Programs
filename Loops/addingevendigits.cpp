#include <iostream>
using namespace std;
int main() {
int n;
cout << "enter any number : ";
cin >> n;
int sum = 0;
while (n>0){
    int ld = n%10;
    n = n/10;
    if (ld%2==0){
    sum = sum + ld;
    }
    else {
    continue;
    }
}
cout << "sum of entered even digits is " << sum;

    return 0;
}