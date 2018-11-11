#include <string>
#include <sstream>
#include <iostream>
#include "HashMap.hpp"

/* constructor */
HashMap::HashMap():
  count{0},
  numBuckets{5} {
  this->store = new LinkedList[numBuckets];
}

/* accessors */
int HashMap::get(int key) const {
  int internal = bucketIndex(key, numBuckets);
  LinkedList* bucket = &store[internal];
  Node* node = bucket->find(key);
  return node->val;
}

void HashMap::set(int key, int val) {
  if (count == numBuckets) resize();
  int internal = bucketIndex(key, numBuckets);
  LinkedList* bucket = &store[internal];
  bucket->push(key, val);
}

/* basic operations */
void HashMap::remove(int key) {
  int internal = bucketIndex(key, numBuckets);
  LinkedList* bucket = &store[internal];
  bucket->remove(key);
}

bool HashMap::includes(int key) const {
  int internal = bucketIndex(key, numBuckets);
  LinkedList* bucket = &store[internal];
  return bucket->includes(key);
}

/* debugger */
void HashMap::print() const {
  std::cout << "\n{\n";
  for (int indexRow = 0; indexRow < numBuckets; indexRow++) {
    store[indexRow].print();
  }
  std::cout << "}\n" << std::endl;
}

/* private */
int HashMap::bucketIndex(int key, int nBuckets) const {
  int hashValue = hash(key);
  if (hashValue >= 0) return hashValue % nBuckets;
  return (-1 * hashValue) % nBuckets;
}

int HashMap::hash(int value) const {
  std::hash<std::string> hasher;
  std::stringstream string;
  string << value;
  return (int) hasher(string.str());
}

void HashMap::resize() {
  int value;
  int newIndex;
  int newBuckets = numBuckets * 2;
  LinkedList* newStore = new LinkedList[newBuckets];
  
  for (int bucketIdx = 0; bucketIdx < numBuckets; bucketIdx++) {
    for (int index = 0; index < store[bucketIdx].count; index++) {
//      value = store[bucketIdx][index];
//      newIndex = bucketIndex(value, newBuckets);
//      newStore[newIndex].push_back(value);
    }
  }
  
  delete[] store;
  store = newStore;
  numBuckets = newBuckets;
}
