#include <iostream>
using namespace std;

int main() {
    (((cout << "Hello" ) << " World" ) << endl);
    // (cout << ("Hello" << (" World" << endl))); // Does not compile
    return 0;
}
