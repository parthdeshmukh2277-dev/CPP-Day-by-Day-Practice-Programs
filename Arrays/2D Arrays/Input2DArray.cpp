#include <iostream>
#include <vector>
using namespace std;
int main () {
int r,c;    
cout << "Enter no of rows : ";
cin >> r;
cout << "Enter no of coloumn : ";
cin >> c;
cout << "Enter " << r << " row elements " << "and " << c << " coloumn elements" << "\n";
    vector<vector<int>> arr(r, vector<int>(c));
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
        cin>>arr[i][j];
        }
    }
    cout << "Entered 2D Array is" << "\n";
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
        cout<<arr[i][j] << " ";
        }
        cout << "\n";
    }
return 0;
}