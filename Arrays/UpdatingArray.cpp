#include <iostream>
using namespace std;
int main () {
    int arr[5]; //Declartion of array
    cout << "Enter Array Elements : ";
    for (int i = 0; i<=4; i++){
    cin >> arr[i];
}
arr[0] = 100;
cout << "Updated Array is : ";
    for (int i = 0; i<=4; i++){
    cout << arr [i] << " ";
    }
}