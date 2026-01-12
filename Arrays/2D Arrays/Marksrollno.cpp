#include <iostream>
using namespace std;
int main () {
    int arr [4][2] = {{21,89},{40,96},{53,71},{21,89}};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++){
        cout << arr[i][j] << " ";
        }    
     cout << endl;
    }
}