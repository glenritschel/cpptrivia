#include <iostream>

using namespace std;

int main() {
   volatile int    i_volatile = 3;
            int    i          = 5;
   const    int    i_const    = 7;
   volatile int * pi_volatile = &i_volatile;
            int * pi          = &i;
   const    int * pi_const    = &i_const;

   i = i_volatile;
   i_volatile = i;

   ///////////////////////////////////////////
   // The following line does not compile: 
   //   pi     = pi_volatile;
   ///////////////////////////////////////////
   pi_volatile = pi;

   ///////////////////////////////////////////
   // The following line does not compile: 
   //   pi  = pi_const;
   ///////////////////////////////////////////
   pi_const = pi;

   return 0;
}

