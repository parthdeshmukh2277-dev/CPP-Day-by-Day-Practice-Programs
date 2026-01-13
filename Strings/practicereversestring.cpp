#include <iostream>
using namespace std;
int main () {
    string s = "Deshmukh";
    cout << s << "\n";
    int n = s.length();
    reverse(s.begin()+2, s.begin()+5);
    cout << s;
}