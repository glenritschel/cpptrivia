#include <iostream>
using namespace std;
int main() {
    int i = 1;
    int const j = 1;
    switch (-1)          cout << "switch(-1)"        << endl;
    switch ( 0)          cout << "switch( 0)"        << endl;
    switch ( 1)      i : cout << "switch( 1) i"      << endl;
    switch ( 1) case 1 : cout << "switch( 1) case 1" << endl;
    switch ( 1) case j : cout << "switch( 1) case j" << endl;
    return 0;
}
