#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n;
    cout << "Enter n :";
    cin >> n;
    cout << "Enter array elements : ";
    vector <int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "New array is : ";
    for (int i=0; i<n; i++) {
        if(arr[i] % 2 != 0){
            arr [i] += 10;
        }
        else {
            arr [i] *= 2;
        }
        cout << arr [i] << " ";
    }
}