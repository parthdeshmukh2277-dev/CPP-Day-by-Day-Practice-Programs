#include <iostream>
using namespace std;
int main () {
    int arr [] = {2,3,12,33,56,76,10,4};
    int n = sizeof(arr)/4;
    int mx = arr[0];
    for (int i=1; i<n; i++) {
        if (arr[i]>mx) mx = arr[i];
    }
    cout << "Maximum number present in array is : " << mx;
}