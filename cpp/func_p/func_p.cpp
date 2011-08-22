#include <iostream>
using namespace std;

int func() {
    return 6;

}

int main()
{
   cout << func() << endl;
   cout << (&func)() << endl;
   cout << (*(&func))() << endl;
   cout << (&(*(&func)))() << endl;
   // cout << &func() << endl;
   // cout << (&(&func)())() << endl; // Does not compile
   // cout << *(&(&func))() << endl;
   return 0;
} 
