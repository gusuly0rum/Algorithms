#include <string>
#include <sstream>
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
  int internal = bucketIndex(key, numBuckets);
  LinkedList bucket = store[internal];
  Node* node = bucket.find(key);
  return node->val;
}

/* basic operations */
void HashMap::remove(int key) {
  int internal = bucketIndex(key, numBuckets);
  LinkedList bucket = store[internal];
  bucket.remove(key);
}

bool HashMap::includes(int key) const {
  int internal = bucketIndex(key, numBuckets);
  LinkedList bucket = store[internal];
  return bucket.includes(key);
}

/* private */
void HashMap::insert(int value) {
}

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
}