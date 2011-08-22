#include <iostream>
using namespace std;

class A 
{
public:
    A(int) {throw 44; }
    A() {}
    ~A() {cout << "A's DTOR called" << endl; }
};

class B
{
public:
    B();
    ~B() {cout << "B's DTOR called" << endl; }
private:
    A d_a;
    int d_an_int;
};

B::B()
try
:
d_a(0),
d_an_int(4)
{
    //cout << "No exception" << endl;
} catch(int i) {
    cout << "exception: " << i << endl;
    throw;
}

int main()
{
    B *b = new B;
    return 0;
}   
