#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector <int> arr(n);
    cout << "Enter " << n << " array elements : "; 
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int mx = INT_MIN;
    for(int i=0; i<n; i++) {
        if (arr[i]>mx) mx = arr[i];
    }
    cout << "Maximun number from array is : " << mx;
}