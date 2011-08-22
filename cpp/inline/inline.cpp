#include <iostream>
using namespace std;

class A
{
 public:
    int m_a;
    inline int inc() {++m_a;}
};

int main()
{
    A a;
    a.m_a = 1;
    a.inc();
    cout << a.m_a << endl;
    return 0;
}
    

