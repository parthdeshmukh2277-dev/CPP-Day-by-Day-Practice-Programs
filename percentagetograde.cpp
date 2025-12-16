#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the percentage obtained : ";
    cin >> n;
    if (n > 100){
    cout << "Error 404 !!!";
    }
    else if (n >= 81){
    cout << "Very Good Performance\n" << "A Grade";
    }
    else if (n >= 61){
     cout << "Good Performance\n" << "B Grade";
    }
     else if (n >= 41){
      cout << "Average Performance\n" << "C Grade";
     }
      else {
       cout << "Fail;";
      }
    return 0;
} 