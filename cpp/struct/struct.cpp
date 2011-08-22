//#include <iostream>
//using namespace std;

struct MyStruct {int i;};

struct MyStruct2 : MyStruct {int i;};

class MyClass : public MyStruct {public: int i;};

class MyStruct3 : public MyClass {int i;};

int func(void *v) {return 0;}

int main() {
   MyStruct/**/s1;
   s1.i = 42;
   MyStruct2 s2;
   s2.MyStruct::i = 43;
   MyClass c1;
   c1.MyStruct::i = 44;
   MyStruct3 s3;
   s3.MyClass::i = 45;
//   cout << s1.i << endl;
}
