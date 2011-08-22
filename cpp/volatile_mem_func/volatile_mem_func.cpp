#include <iostream>
using namespace std;

class A {
 public:
    void volatile_func    () volatile {cout<<"    volatile_func\n";}
    void non_volatile_func()          {cout<<"non_volatile_func\n";}
    void const_func       () const    {cout<<"       const_func\n";}
    void non_const_func   ()          {cout<<"   non_const_func\n";}
};

int main() {
    volatile A aVolatile;
             A aNonVolatile;
    const    A aConst      = A();
             A aNonConst;
    aVolatile.volatile_func();
    //aVolatile.non_volatile_func();
    aNonVolatile.volatile_func();
    aNonVolatile.non_volatile_func();

    aConst.const_func();
    //aConst.non_const_func();
    aNonConst.const_func();
    aNonConst.non_const_func();
    return 0;
}


