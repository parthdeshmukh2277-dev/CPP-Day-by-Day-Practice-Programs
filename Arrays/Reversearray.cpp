#include <iostream>
#include <vector>
using namespace std;
int main (){
    int n;
    cout << "Enter number of array elements : ";
    cin >> n;
    cout << "Enter array elements : ";
    vector <int> a (n);
    vector <int> b (n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
}
cout << "Reverse of this array elements is : ";
for (int i = 0; i < n; i++){
    b[i] = a[n-1-i];
    cout << b[i] << " ";
}
}