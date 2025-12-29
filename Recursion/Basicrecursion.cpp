#include <iostream>
using namespace std;
void print (int n) {
    if (n==0) return;
    cout << n << " ";
    print(n-1); //here we used recursuin i.e. function calling function repeatedly
}
int main (){
    int n;
    cout << "enter n : ";
    cin >> n;
    print (n);
}