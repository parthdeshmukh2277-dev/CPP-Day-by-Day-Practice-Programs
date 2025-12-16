#include <iostream>
using namespace std;
int main() {
    int l, b, area, perimeter;
    cout << "Enter Length of Rectangle : ";
    cin >> l;
    cout << "Enter Breadth of Rectangle : ";
    cin >> b;
    area = l * b;
    cout << "Area of Rectangle is : " << area << endl;
    perimeter = 2*l + 2*b;
    cout << "Perimeter of Rectangle is : " << perimeter << endl;
    if (area > perimeter)
    cout << "Area of Rectangle is greater than its perimeter";
    else if (area < perimeter)
    cout << "Area of Rectangle is smaller than its perimeter";
    else
    cout << "Area of Rectangle is equal its perimeter";
    return 0;
}