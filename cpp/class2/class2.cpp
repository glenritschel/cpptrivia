    struct A {
       static const int a = 5;
       struct B {
          static const int b = a;
       };
    };
    int c = A::B::b;

    int main() {return c;}

