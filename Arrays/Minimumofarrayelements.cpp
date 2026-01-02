#include <iostream>
using namespace std;
int main () {
    int arr [] = {22,31,76,11,3,99,65,9};
    int n = sizeof(arr)/4;
    int mn = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < mn) mn = arr[i];
    }
    cout << "Minimum number fro array is : " << mn;
}