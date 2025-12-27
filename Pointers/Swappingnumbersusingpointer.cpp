#include <iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main () {
int x,y;
cout << "Enter first Number : ";
cin >> x;
cout << "Enter second Number : ";
cin >> y;
swap(&x,&y);
cout << "Swapped numbers are : " << x << "," << y;
}