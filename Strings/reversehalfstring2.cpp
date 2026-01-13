#include <iostream>
using namespace std;
int main () {
    string s = "Parth";
    cout << s << "\n";
    reverse(s.begin(), s.begin()+3);
    cout << s;
}