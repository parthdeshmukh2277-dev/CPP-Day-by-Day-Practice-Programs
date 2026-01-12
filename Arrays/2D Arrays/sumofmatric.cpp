#include <iostream>
#include <vector>
using namespace std;
int main () {
    int r,c;
    cout << "Enter no of rows : ";
    cin >> r;
    cout << "Enter no of coloumns : ";
    cin >> c;
    cout << "Enter " << r*c << " of first array : ";
    vector<vector<int>> arr1(r, vector<int>(c));
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr1[i][j];
        }
    }
    cout << "Enter " << r*c << " of second array : ";
    vector<vector<int>> arr2(r, vector<int>(c));
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr2[i][j];
        }
    }
    cout << "Sum of 2 matrix is : " << "\n";
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << "\n";
    }
}