// namespace.cpp
// This program outputs the following:
//     4
//     8
//
#include <iostream>
using namespace std;

template <class T>
class glen {
public:
   static const int size = sizeof(T);
};

int main() {
   cout << glen<int>::size << endl;
   cout << glen<long long>::size << endl;
}

