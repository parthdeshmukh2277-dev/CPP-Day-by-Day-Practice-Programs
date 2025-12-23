#include <iostream>
using namespace std;
int main () {
int n;
cout << "Enter n : ";
cin >> n;
for (int i=1; i <=n; i++){
    for (int j = 1; j<= i; j++){
    cout << 2*j-1 << " "; //2*n-1 is AP formula
    }
    cout << "\n";
}
return 0;
}