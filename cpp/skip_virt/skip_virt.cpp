#include <iostream>
using namespace std;

class B
{
public:
virtual void process() {cout << "B::process()" << endl;}
};

class D : public B
{
public:
void process() {cout << "D::process()" << endl;}
};

class DD : public D
{
public:
void process() {cout << "DD::process()" << endl;}
};

int main() {
    B * pb = new DD();
    pb->process();
    return 0;
}

