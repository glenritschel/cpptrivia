#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    ostringstream ss;

    ss << 1 << 2 << 3;

    cout << ss.str();
    return 0;
}
