#include <iostream>
using namespace std;

class X {};

X funcX() {X x; return x;}

int & func() {
  static int temp = 1;
  cout << temp << endl;
  return temp;
}

int main() {
  func() = 2;
  func();
  X x;
  funcX() = x;
  return 0;
}
