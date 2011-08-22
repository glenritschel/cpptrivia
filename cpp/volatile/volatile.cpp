#include <iostream>
using namespace std;

volatile int g_a = 1;

int i = static_cast<int>(g_a);

int main()
{
    cout << i << endl;
    return 0;
}

