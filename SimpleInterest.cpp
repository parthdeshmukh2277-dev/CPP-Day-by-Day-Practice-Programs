#include <iostream>
using namespace std;
int main() {
    float p, r, t, SimpleInterest;
    cout<<"Enter the Principle :\n";
    cin>>p;
     cout<<"Enter the Rate of Interest :\n";
    cin>>r;
     cout<<"Enter the Time Limit :\n";
    cin>>t;
    SimpleInterest = p*r*t/100;
    cout<<"Simple Interest is :"<<SimpleInterest ;
    return 0;

}
