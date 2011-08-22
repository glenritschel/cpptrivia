#include <list>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
  list<int> myList;
  myList.push_back(8);
  myList.push_back(1);
  myList.push_back(8);
  myList.push_back(2);
  myList.push_back(8);
  // myList.remove(3);
  list<int>::iterator listIterEnd = remove(myList.begin(), myList.end(), 8);
  cout << "myList.size(): " << myList.size() << endl;
  cout << "*listIterEnd: " << *listIterEnd << endl;
  cout << "listIterOffset: " << distance(myList.begin(), listIterEnd) << endl;
  list<int>::iterator myListIter = myList.begin();
  cout << "*myList.begin(): " << *myList.begin() << endl;
  cout << "*(++myListIter): " << *(++myListIter) << endl;
  cout << "*(++myListIter): " << *(++myListIter) << endl;
  cout << "*(++myListIter): " << *(++myListIter) << endl;
  cout << "*(++myListIter): " << *(++myListIter) << endl;

  cout << endl;

  vector<int> myVector;
  myVector.push_back(8);
  myVector.push_back(1);
  myVector.push_back(8);
  myVector.push_back(2);
  myVector.push_back(8);
  vector<int>::iterator vectorIterEnd = remove(myVector.begin(), myVector.end(), 8);
  cout << "myVector.size(): " << myVector.size() << endl;
  cout << "*vectorIterEnd: " << *vectorIterEnd << endl;
  cout << "vectorIterOffset: " << distance(myVector.begin(), vectorIterEnd) << endl;
  cout << "myVector[0]: " << myVector[0] << endl;
  cout << "myVector[1]: " << myVector[1] << endl;
  cout << "myVector[2]: " << myVector[2] << endl;
  cout << "myVector[3]: " << myVector[3] << endl;
  cout << "myVector[4]: " << myVector[4] << endl;

  cout << endl;

  list<int> myList2;
  myList2.push_back(8);
  myList2.push_back(1);
  myList2.push_back(8);
  myList2.push_back(2);
  myList2.push_back(8);
  myList2.remove(8);
  list<int>::iterator list2IterEnd = myList2.end();
  cout << "myList2.size(): " << myList2.size() << endl;
  cout << "*list2IterEnd: " << *list2IterEnd << endl;
  cout << "list2IterOffset: " << distance(myList2.begin(), list2IterEnd) << endl;
  list<int>::iterator myList2Iter = myList2.begin();
  cout << "*myList2.begin(): " << *myList2.begin() << endl;
  cout << "*(++myList2Iter): " << *(++myList2Iter) << endl;
  cout << "*(++myList2Iter): " << *(++myList2Iter) << endl;
  cout << "*(++myList2Iter): " << *(++myList2Iter) << endl;
  cout << "*(++myList2Iter): " << *(++myList2Iter) << endl;

  cout << endl;


  return 0;
}

