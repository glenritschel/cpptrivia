#include <iostream>
using namespace std;

class A
{
 public:
   A() {cout << "Default constructor" << endl; }
   A(const A& a, int i = 0) { cout << "Copy plus constructor: i: " << i << endl;}
 private:
   // A(const A& a) { cout << "Copy constructor " << endl;}
};

int main() {
   A a;
   A b(a);
   A c(a, 1);
   return 0;
}
