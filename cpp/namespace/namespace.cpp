#include <iostream>
using namespace std;

struct S1 {static int a;};
int S1::a;

namespace N1 {int a;};

struct A  {};

struct B {
   struct B2 {
      struct B3 {};
   };
};

namespace NA {
   struct A  {};
}

namespace NB {
    struct B {
       //namespace NB2 {
           struct B2 {
               //namespace NB3 {
                   struct B3 {};
               //}
           };
        //}
    };
}


int main() {
    A         a;
    B         b;
    B::B2     b2;
    B::B2::B3 b3;

    NA::A                      na;
    NB::B                      nb;
    NB::B::B2                  nb2;
    //NB::B::NB2::B2           nb2;
    NB::B::B2::B3              nb3;
    // NB::B::NB2::B2::NB3::B3 nb3;
    N1::a = 1;
    S1::a = 1;
    return 0;
}

    

