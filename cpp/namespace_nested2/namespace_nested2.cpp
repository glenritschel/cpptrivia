    namespace A {
       int a = 5;
       namespace B {
          int b = a;
       }
    }
    using namespace A::B;
    int c = b;
    int main() {return c;}


