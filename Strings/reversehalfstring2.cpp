#include <iostream>
using namespace std;
int main () {
    string s = "Deshmukh";
    cout << s << "\n";
    int n = s.length();
    reverse(s.begin(), s.begin()+ n/2);
    cout << s;
}