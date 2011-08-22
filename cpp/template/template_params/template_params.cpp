// namespace.cpp
// This program outputs the following:
//     4
//     8
//
#include <iostream>
#include <vector>
using namespace std;

template <class T, class CONTAINER = std::vector<T> > class MyContainer
{
public:
    CONTAINER container;
};

MyContainer<int> myIntContainer;


int main() {
   myIntContainer.container.push_back(4);

   cout << myIntContainer.container.at(0) << endl;
}

