#include <iostream>
using namespace std;
int main () {
    string s = "Parth";
    cout << s << "\n";
    int n = s.length();
    int i = 0;
    int j = n - 1;
    while (i<j)
    {
    int temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    i++;
    j--;
    }
    cout << s;
    
}