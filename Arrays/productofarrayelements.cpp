#include <iostream>
using namespace std;
int main () {
    int arr[] = {2,3,4,5};
    int product = 1;
    for (int i = 0; i < 4; i++) {
        product = product * arr[i];
    }
    cout << "Product of array elements is : " << product << " ";
}