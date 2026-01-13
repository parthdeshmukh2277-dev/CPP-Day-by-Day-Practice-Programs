#include <iostream>
using namespace std;
int main () {
string s = "Parth";
cout << s << "\nLength : " << s.length() << "\n";
s = s + " Deshmukh";
cout << s << "\nLength : " << s.length() << "\n";
s = "Deshmukh " + s;
cout << s << "\nLength : " << s.length() << "\n";
}