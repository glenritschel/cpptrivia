#include <iostream>
using namespace std;

bool lessthan1(int a1, int b1, int c1, int a2, int b2, int c2) {
 
    return a1<a2?true:
                b1<b2?true:
                     c1<c2?true:
                          false;
}

bool lessthan2(int a1, int b1, int c1, int a2, int b2, int c2) {
    if (a1 < a2) {
         return true;
     } else if (b1 < b2) {
         return true;
     } else if (c1 < c2) {
         return true;
     } else {
         return false;
     }
}

int main() {
    bool rc1; bool rc2;
    rc1 = lessthan1(0,0,0, 0,0,0);
    rc2 = lessthan2(0,0,0, 0,0,0);
    cout << "rc1: " << rc1 << " rc2: " << rc2 << " expected: false" << endl;

    rc1 = lessthan1(0,0,1, 0,0,0);
    rc2 = lessthan2(0,0,1, 0,0,0);
    cout << "rc1: " << rc1 << " rc2: " << rc2 << " expected: false" << endl;

    rc1 = lessthan1(0,0,0, 0,0,1);
    rc2 = lessthan2(0,0,0, 0,0,1);
    cout << "rc1: " << rc1 << " rc2: " << rc2 << " expected: true" << endl;

    rc1 = lessthan1(0,0,1, 0,1,0);
    rc2 = lessthan2(0,0,1, 0,1,0);
    cout << "rc1: " << rc1 << " rc2: " << rc2 << " expected: true" << endl;

    rc1 = lessthan1(0,1,0, 1,0,0);
    rc2 = lessthan2(0,1,0, 1,0,0);
    cout << "rc1: " << rc1 << " rc2: " << rc2 << " expected: true" << endl;

    rc1 = lessthan1(1,0,0, 1,0,0);
    rc2 = lessthan2(1,0,0, 1,0,0);
    cout << "rc1: " << rc1 << " rc2: " << rc2 << " expected: false" << endl;

    rc1 = lessthan1(1,0,0, 1,1,0);
    rc2 = lessthan2(1,0,0, 1,1,0);
    cout << "rc1: " << rc1 << " rc2: " << rc2 << " expected: true" << endl;

    rc1 = lessthan1(1,1,0, 1,1,1);
    rc2 = lessthan2(1,1,0, 1,1,1);
    cout << "rc1: " << rc1 << " rc2: " << rc2 << " expected: true" << endl;

    rc1 = lessthan1(1,1,1, 1,1,1);
    rc2 = lessthan2(1,1,1, 1,1,1);
    cout << "rc1: " << rc1 << " rc2: " << rc2 << " expected: false" << endl;

    return 0;
}

