#include <iostream>
using namespace std;

namespace Out {
    void func(int i) {cout << "Out::func(int i)" << endl;}
    namespace In {
        void func(double d) {cout << "Out::In::func(double d)" << endl;}
        void func(int    i) {cout << "Out::In::func(int    i)" << endl;}
        void dispatcher() {func(1);func(1.0);}
}} // end namespaces Out::In
int main() {
    Out::In::dispatcher();
    // The above prints the following:
    //     Out::In::func(int    i)
    //     Out::In::func(double d)
    return 0;
}

