#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter any number : ";
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= n/2; i++){
    if(n%i==0) 
    flag = false;
    break;
    }
    if (n==1)  cout << "Entered number is neiher prime nor composite";
    else if(flag == true) cout << "Entered number is a prime number";
    else cout << "Entered number is a composite number";
    return 0;
}