#include <array>
#include <string>
#include <sstream>
#include <iostream>
#include "HashSet.hpp"

/* constructor */
HashSet::HashSet() {
  this->count = 0;
  this->numBuckets = 5;
  std::vector<int> store[numBuckets];
}


/* basic operations */
// O(1)
void HashSet::insert(int value) {
  int internal = bucketIndex(value, numBuckets);
  std::vector<int> bucket = store[internal];
  bucket.push_back(value);
}

// O(1) but worst case O(k)
void HashSet::remove(int value) {
  int internal = bucketIndex(value, numBuckets);
  std::vector<int> bucket = store[internal];
  int index = indexAt(bucket, value);
  bucket.erase(bucket.begin() + index);
}

// O(1) but worst case O(k)
bool HashSet::includes(int value) const {
  int internal = bucketIndex(value, numBuckets);
  std::vector<int> bucket = store[internal];
  for (int index = 0; index < bucket.size(); index++) {
    if (bucket[index] == value) return true;
  }
  return false;
}


/* debugger */
void HashSet::print() const {
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
int HashSet::hash(int value) const {
  std::hash<std::string> hasher;
  std::stringstream string;
  string << value;
  return (int) hasher(string.str());
}

int HashSet::bucketIndex(int value, int nBuckets) const {
  int hashValue = hash(value);
  if (hashValue >= 0) return hashValue % nBuckets;
  return (-1 * hashValue) % nBuckets;
}

int HashSet::indexAt(std::vector<int> bucket, int value) const {
  for (int index = 0; index < bucket.size(); index++) {
    if (bucket[index] == value) return index;
  }
  return -1;
}

void HashSet::resize() {
  int value;
  int newIndex;
  int newBuckets = numBuckets * 2;
  std::vector<int>* newStore = new std::vector<int>[newBuckets];
  
  for (int bucketIdx = 0; bucketIdx < numBuckets; bucketIdx++) {
    for (int index = 0; index < store[bucketIdx].size(); index++) {
      value = store[bucketIdx][index];
      newIndex = bucketIndex(value, newBuckets);
      newStore[newIndex].push_back(value);
    }
  }
  
  delete[] store;
  store = newStore;
  numBuckets = newBuckets;
}
