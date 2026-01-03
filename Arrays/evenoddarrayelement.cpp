#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter " << n << " Array Elements : ";
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }
    int sumeven = 0;
    int sumodd = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
          sumeven += arr[i];
        }
          else {
          sumodd += arr[i];
          }
    }
    cout << "Difference betwwen sum of even & sum of odd elements of array is : "<< sumeven - sumodd;
    return 0;
}