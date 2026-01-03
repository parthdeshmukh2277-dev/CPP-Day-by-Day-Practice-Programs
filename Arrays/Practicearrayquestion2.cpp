#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n,x;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter " << n << " Array Elements : ";
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }
    cout << "Enter x : ";
    cin >> x;
    cout << "Array elements that are greater than " << x << " are : ";
    for(int i=0; i<n; i++){
        if(arr[i] > x){
            cout << arr[i] << " ";
        }
    }
    return 0;
}