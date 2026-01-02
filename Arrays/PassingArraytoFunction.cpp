#include <iostream>
using namespace std;
void change (int arr []){
arr[0] = 9;
arr[4] = 8;
}
int main () {
int arr [] = {1,2,3,4,5};
for (int i =0; i<=4; i++){
    cout << arr[i] << " ";
}
cout << "\n";
change (arr); //this is pass by reference
for (int i =0; i<=4; i++){
    cout << arr[i] << " ";
}
return 0;
}