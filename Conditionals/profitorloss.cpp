#include <iostream>
using namespace std;
int main() {
    int cp, sp;
    cout << "Enter the Cost price : Rs";
    cin>>cp;
    cout << "Enter the Selling price : Rs";
    cin>>sp;
    if (sp > cp) {
    cout << "Seller made a profit of : Rs" << sp-cp;
    }
    else if (sp == cp) {
    cout << "Seller had no profit no loss";
    }
    else {
    cout <<"Seller had loss of : Rs" <<cp-sp;
    }
    return 0;
}