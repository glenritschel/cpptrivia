#include <iostream>
#include <sys/wait.h>
using namespace std;

int main(int argc, char * argv[]) {
  int rc = argc - 1; 
  if (rc == 0) {
    rc = system("./a.exe 1");
  }
  cout << "rc: " << rc << endl; 
  return rc;
}

