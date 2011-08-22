#include <iostream>
using namespace std;

class A
{
public:
    int m_a;
    void func()
    {
        ++m_a;
    }
    void functhis()
    {
       ++(this->m_a);
    }
};

int main()
{
    A a;

    a.m_a = 1;
    a.func();
    a.functhis();
    cout << a.m_a << endl;

    return 0;
}
