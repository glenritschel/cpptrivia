    namespace A {
       static const int a = 5;
       namespace B {
          static const int b = a;
       }
    }
    using A::B::b;
    int c = b;
    int main() {return c;}



