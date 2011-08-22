// decl_in_if.cpp
#include <iostream>
using namespace std;

int main() {
    if (int i = 0)
    {
        i = 11;
        cout << "Test 1 failed" << endl;
    }
    else 
    {
        i = 23;
        cout << "Test 1 passed" << endl;
    }
    if (int j = 1)
    {
        j = 29;
        cout << "Test 2 passed" << endl;
    }
    else 
    {
        j = 31;
        cout << "Test 2 failed" << endl;
    }
    return 0;
}
/* The above program prints out the following:
 * 
 * Test 1 passed
 * Test 2 passed
 *
 */

