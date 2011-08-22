#include <iostream>
using namespace std;
struct MyStrm {
MyStrm() {d_cnt = 5;}
operator void *() {return d_cnt?&d_cnt:0;}
 int get() {return d_cnt--;}
 int d_cnt;
};
int main() {
 MyStrm myStrm;
 while (myStrm)cout<<myStrm.get()<<endl;
 return 0;
}

