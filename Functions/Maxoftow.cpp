#include <iostream>
using namespace std;
int maxoftwo(int a, int b){
    if (a>b) return a;
    else return b;
}
int main () {
int a,b;
cout << "Enter first no : ";
cin >> a;
cout << "Enter second no : ";
cin >> b;
cout << "Max of two number is : "<< maxoftwo(a,b);
}