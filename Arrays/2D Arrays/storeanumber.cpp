#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter n :";
    cin >> n;
    int arr [5][5];
    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
        arr[i][j] = n; 
        } 
    }
    for(int i=0; i<5;i++){
        for(int j=0; j<5; j++){
        cout << arr[i][j] << " ";
        } 
    cout << "\n";
    }
}