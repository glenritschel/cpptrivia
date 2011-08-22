#include <iostream>
using namespace std;
struct MyStruct {~MyStruct() {/*throw 1;*/}};
int main() {
    try {
        MyStruct myObject;
        throw 2;
    } catch (int& e) {
        cout << "Caught exception: " << e << endl;
    }
    cout << "About to return from main()" << endl;
    return 0;
}
