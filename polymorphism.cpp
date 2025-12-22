#include <iostream>
using namespace std;

class Add {
public:
    float sum(int a, int b) {
        return a + b;
    }

    int sum(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Add obj;

    cout << obj.sum(10, 20) << endl;
    cout << obj.sum(10, 20, 30) << endl;

    return 0;
}
