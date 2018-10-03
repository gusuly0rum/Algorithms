#include <string>
#include <sstream>
#include <iostream>
#include "IntegerSet.hpp"

/* constructor */

IntegerSet::IntegerSet() {
  count = 0;
  numBuckets = 5;
  store = new int*[numBuckets];
  fillStore();
}

/* public */
void IntegerSet::insert(int val) {
  if (count == numBuckets) resize();
//  int* bucket = store[bucketIndex(val)];
//  std::cout << bucket << std::endl;
//  bucket[0] = val;
  
  store[bucketIndex(val)][0] = val;
  count++;
}

void IntegerSet::remove(int val) {
  int* bucket = store[bucketIndex(val)];
  bucket[0] = NULL;
  count--;
}
bool IntegerSet::includes(int val) {
  int* bucket = store[bucketIndex(val)];
  return !!bucket[0];
}

void IntegerSet::print() {
  std::cout << "{ ";
  for (int k = 0; k < numBuckets; k++) {
    std::cout << store[k];
    if (k < numBuckets - 1) std::cout << ", ";
  }
  std::cout << " }\n" << std::endl;
}

/* private */
void IntegerSet::fillStore() {
  int* bucket;
  for (int k = 0; k < numBuckets; k++) {
    bucket = new int[1];
    store[k] = bucket;
    store[k][0] = NULL;
  }
}

int IntegerSet::bucketIndex(int val) {
  return hash(val) % numBuckets;
}

int IntegerSet::hash(int val) {
  std::hash<std::string> hasher;
  std::stringstream string;
  string << val;
  return (int) hasher(string.str());
}

void IntegerSet::resize() {
  int value;
  int bucketIndex;
  int new_buckets = numBuckets * 2;
  int** new_store = new int*[new_buckets];
  
  for (int k = 0; k < numBuckets; k++) {
    value = store[k][0];
    bucketIndex = hash(value) % new_buckets;
    new_store[bucketIndex][0] = value;
  }
  
  delete[] store;
  store = new_store;
  numBuckets = new_buckets;
}
