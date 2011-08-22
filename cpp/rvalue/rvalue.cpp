#include <iostream>
using namespace std;

extern int const i = 42;
       int const j = 42;
       const int k = 42;
       const extern int m = 42;
       int extern const n = 42;

int main() {
    int const x = 5;
    int myArray[5] = {5};

    const int *r = myArray;
    const int (*s)[5] = &myArray;

    cout << *r;

    const int *p = 0;
    const int q = 1;

    //p = &0;
    p = &q;

    cout << j << endl;
 
    return 0;
}
