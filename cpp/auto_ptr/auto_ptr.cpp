#include <memory>
#include <iostream>
using namespace std;

int main() {
    int * p = 0;
    {
        int * q = 0;
        auto_ptr<int> apInt(p = new int);
        q = apInt.get();
        cout << "q: " << q << endl;
        cout << "p: " << p << endl;
        *apInt = 1;
        cout << "*apInt: " << *apInt << endl;
        apInt.release();
        q = apInt.get();
        cout << "q: " << q << endl;
    }
    cout << "p: " << p << endl;
    return 0;
}
