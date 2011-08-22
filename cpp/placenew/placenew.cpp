#include <iostream>
int main() {
    int data = 5;
    int hidden_pointer = reinterpret_cast<int>(&data);
    int *newData_p = new (reinterpret_cast<void*>(hidden_pointer)) int;
    std::cout << *newData_p << std::endl;
    return 0;
}
    
