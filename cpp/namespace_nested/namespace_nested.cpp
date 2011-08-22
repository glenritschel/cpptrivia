    namespace A {
       int a = 5;
       namespace B {
          int b = a;
       }
    }
    int main() {return A::B::b;}

