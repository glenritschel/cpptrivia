#include <iostream>
using namespace std;

namespace Out {
    void func(int i) {cout << "Out::func(int i)" << endl;}
    namespace In {
        void func(double d) {cout << "Out::In::func(double d)" << endl;}
}} // end namespaces Out::In

using namespace Out;
using namespace Out::In;

void dispatcher() {func(1);func(1.0);}

int main() {
    dispatcher();
    // The above prints the following:
    //     Out::func(int i)
    //     Out::In::func(double d)
    return 0;
}

