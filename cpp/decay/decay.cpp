#include <iostream>

template <int N>
void printer(char const * const arg) {
    std::cout << arg << std::endl;
}

char const myChars[] = "Hello";

char const * const psz = &(myChars[0]);

int main() {
    printer("hello");
    return 0;
}
