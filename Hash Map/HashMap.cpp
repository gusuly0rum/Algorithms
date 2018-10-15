#include <iostream>
#include "HashMap.hpp"

/* constructor */
HashMap::HashMap() {
  this->count = 0;
  this->numBuckets = 5;
  this->store = new LinkedList[numBuckets];
}

/* accessors */
int& HashMap::operator[](int key) {
  LinkedList bucket = store[bucketIndex(key)];
  Node* node = bucket.find(key);
  return node->value;
}

/* basic operations */
void HashMap::remove(int key) {
}

bool HashMap::includes(int key) const {
  return 0;
}

/* debugger */
void HashMap::print() const {
  std::cout << "\n{\n";
  for (int indexRow = 0; indexRow < numBuckets; indexRow++) {
    std::cout << "{ ";
    for (int indexCol = 0; indexCol < store[indexRow].size(); indexCol++) {
      std::cout << store[indexRow][indexCol];
      if (indexCol < store[indexRow].size() - 1) std::cout << ", ";
    }
    std::cout << " }";
    if (indexRow < numBuckets - 1) std::cout << ",\n";
  }
  std::cout << "\n}\n" << std::endl;
}

/* private */
void HashMap::insert(int value) {
}

int HashMap::bucketIndex(int key) const {
}

int HashMap::hash(int value) const {
  std::hash<std::string> hasher;
  std::stringstream string;
  string << value;
  return (int) hasher(string.str());
}

void HashMap::resize() {
}
