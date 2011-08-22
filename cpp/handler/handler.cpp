#include <iostream>
using namespace std;

class A {
 public:
   A() {
      try {
         throw 1;
      } catch (...) {
         return;
      }
      return;
   }
};

int main() {
   try {
      A a;
      throw 1;
   } catch (...) {
      return 0;
   }
   return 0;
}

