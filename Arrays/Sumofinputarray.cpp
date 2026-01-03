#include <iostream>
#include <vector>
using namespace std;
int main (){
    int n;
    cout << "Enter number of array elements : ";
    cin >> n;
    cout << "Enter array elements : ";
    vector <int> arr (n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
}
cout << "sum of entered array elements is : " << sum;
}