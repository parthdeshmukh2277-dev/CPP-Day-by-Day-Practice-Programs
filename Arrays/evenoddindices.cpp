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
    int sumevenindices = 0;
    int sumoddindices = 0;
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
          sumevenindices += arr[i];
        }
          else {
          sumoddindices += arr[i];
          }
    }
    cout << "Difference betwwen sum of even & sum of odd elements of array is : "<< sumevenindices - sumoddindices;
    return 0;
}