#include <iostream>
using namespace std;

      int               g_int         = 1;

const int               g_c_int       = 61;

const int       &       g_c_int_ref   = g_c_int;

      int const &       g_int_c_ref   = g_c_int;

      int       * const g_int_ptr_c   = &g_int;

      int const * const g_int_c_ptr_c = &g_int;

const int       * const g_c_int_ptr_c = &g_int;

//const int const * const g_c_int_c_ptr_c = &g_int;

int main() {
    cout << g_int << endl;
    cout << g_c_int << endl;
    cout << g_c_int_ref << endl;
    cout << g_int_c_ref << endl;
    cout << *g_int_ptr_c << endl;
    cout << *g_int_c_ptr_c << endl;
    //cout << *g_c_int_c_ptr_c << endl;
    cout << *g_c_int_ptr_c << endl;
    return 0;
}
