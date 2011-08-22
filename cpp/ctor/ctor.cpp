#include <iostream>
using namespace std;

class X
{
 public:
   X() : m_i(0)
   {
      cout << "Default Ctor" << endl;
   }
   X(int i) : m_i(i)
   {
      cout << "Ctor with one argument" << endl;
   }
   X(const X & rhs) 
   {
      m_i = rhs.m_i;
      cout << "Copy Ctor" << endl;
   }
   X & operator=(const X & rhs)
   {
      m_i = rhs.m_i;
      cout << "Assignment Operator" << endl;
   }
 private:
   int m_i;
}; 


int main() {
   int i = 3;
   int*p=&i;
   cout << "X x(5);" << endl;
   X x(5);
   cout << "X x2;" << endl;
   X x2;
   cout << "X x3();" << endl;
   X x3();
   cout << "X x4;" << endl;
   X x4;
   cout << "X x5 = 1;" << endl;
   X x5 = 1;
   cout << "X x6 = X(1);" << endl;
   X x6 = X(1);
   cout << "X x7(x6);" << endl;
   X x7(x6);
   cout << "x7 = x5;" << endl;
   x7 = x5;
   cout << "X x8() = 1; is illegal" << endl;
   //X x8() = 1;
   cout << "X x9(1) = 1; is illegal" << endl;
   //X x9(1) = 5;
   return 0;
}
  
