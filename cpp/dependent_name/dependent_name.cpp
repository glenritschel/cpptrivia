class B {
 public:
    class A {
     public:
        int m_a;
    };
};

template<typename T>
void func()
{
    T::A a;
}
   
int main() {
    func<B>();
    return 0;
}
/* The following are the compiler errors when typename is omitted above:
 *
 * dependent_name.cpp: In function `void func()':
 * dependent_name.cpp:12: error: expected `;' before "a"
 * dependent_name.cpp: In function `void func() [with T = B]':
 * dependent_name.cpp:16:   instantiated from here
 * dependent_name.cpp:12: error: dependent-name ` T::A' is parsed
 *     as a non-type, but instantiation yields a type
 * dependent_name.cpp:12: note: say `typename  T::A' if a type is meant
 */
