    struct A {
       static const int a = 5;
       struct B {
          static const int b = a;
       };
    };
    int main() {return A::B::b;}

