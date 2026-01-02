#include <iostream>
using namespace std;
int main () {
    int arr [] = {22,31,76,11,3,99,65,9};
    int n = sizeof(arr)/4;
    int mn = INT_MAX; //INT_MAX is the lowest number which can be stored in the int data type
    for (int i = 1; i < n; i++) {
        if (arr[i] < mn) mn = arr[i];
    }
    cout << "Minimum number fro array is : " << mn;
}