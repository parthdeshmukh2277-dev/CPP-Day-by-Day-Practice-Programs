#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter array elements : ";
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sqr = 1;
    cout << "Square of entred array elements is : ";
    for (int i = 0; i < n; i++) {
        sqr = arr[i] * arr[i];
        cout << sqr << " ";
    }
    return 0;
}