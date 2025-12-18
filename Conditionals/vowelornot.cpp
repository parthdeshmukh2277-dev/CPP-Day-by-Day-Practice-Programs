#include <iostream>
using namespace std;
int main () {
    char ch;
    cout << "Enter any alphabet : ";
    cin >> ch;
    if (ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U'||
        ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'){
        cout << "Entered alphabet is vowel";
    } 
    else {
        cout << "Entered alphabet is not a vowel"; 
    }
return 0;
} 