#include <iostream>
using namespace std;

extern "C++" {
    extern "C" {
        extern "C++" {
            extern "C++" {
                extern "C" {
                    int g_int = 44;
                }
            }
        }

    }
}

int main() {
    cout << g_int << endl;
    return 0;
}
