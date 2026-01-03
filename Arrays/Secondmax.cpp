#include <iostream>
using namespace std;
int main () {
    int arr [] = {2,3,12,33,56,76,10,4};
    int n = sizeof(arr)/4;
    int mx = INT_MIN; //INT_MIN is the lowest number which can be stored in the int data type
    for (int i=1; i<n; i++) {
        if (arr[i]>mx) mx = arr[i];
    }
    cout << "Maximum number present in array is : " << mx << "\n";
    int smx = INT_MIN; //INT_MIN is the lowest number which can be stored in the int data type
    for (int i=1; i<n; i++) {
        if (arr[i] != mx) smx = max(smx, arr[i]);
    }
    cout << " Second maximum number present in array is : " << smx;
}