#include <iostream>
using namespace std;
namespace A {
    struct A {int i;};
    void funcA(A a) {cout<<"A::funcA"<<endl;}
}
namespace B {
    void funcA(A::A a) {cout<<"B::funcA"<<endl;}
}
namespace C {
    void funcC() {A::A a; funcA(a);}
}
int main() {C::funcC(); return 0;}

