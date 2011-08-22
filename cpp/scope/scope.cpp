#include <iostream>
using namespace std;


namespace {
    int ix = 10;
}

int ix = 1;

class X {
public: 
    static int ix;
    static void func() 
    {
        ++ix;
        ++::ix;
        cout << "ix: "   << ix   << endl;
        cout << "::ix: " << ::ix << endl;
        cout << "::ix: " << ::ix << endl;
    }
};

int X::ix = 100;

int main()
{
   X::func();
   return 0;
}

