#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include "Bucket.hpp"
#include "IntegerSet.hpp"

/* constructor */
IntegerSet::IntegerSet() {
  count = 0;
  numBuckets = 5;
  Bucket* store[numBuckets];
  fill();
}

/* basic operations */
void IntegerSet::insert(int val) {
  if (count == numBuckets) resize();
  int internal = bucketIndex(val, numBuckets);
  Bucket* bucket = store[internal];
  bucket->push(val);
  count++;
}

void IntegerSet::remove(int val) {
  Bucket* bucket = store[bucketIndex(val, numBuckets)];
  bucket->remove(val);
  count--;
}

bool IntegerSet::includes(int val) const {
  int internal = bucketIndex(val, numBuckets);
  Bucket* bucket = store[internal];
  return bucket->includes(val);
}

/* debugger */
void IntegerSet::print() const {
  std::cout << "\n{\n";
  for (int indexRow = 0; indexRow < numBuckets; indexRow++) {
    std::cout << "{ ";
    for (int indexCol = 0; indexCol < numBuckets; indexCol++) {
      std::cout << store[indexRow][indexCol];
      if (indexCol < numBuckets - 1) std::cout << ", ";
    }
    std::cout << " }";
    if (indexRow < numBuckets - 1) std::cout << ",\n";
  }
  std::cout << "\n}\n" << std::endl;
}

/* private */
void IntegerSet::fill() {
  for (int indexRow = 0; indexRow < numBuckets; indexRow++) {
    store[indexRow] = new Bucket;
    for (int indexCol = 0; indexCol < numBuckets; indexCol++) {
      store[indexRow][indexCol] = 0;
    }
  }
}

int IntegerSet::length(int bucket[]) const {
  int index = 0;
  while (bucket[index] != 0) index++;
  return index;
}

int IntegerSet::bucketIndex(int val, int nBuckets) const {
  int hashValue = hash(val);
  if (hashValue > 0) {
    return hashValue % numBuckets;
  } else {
    return (-1 * hashValue) % numBuckets;
  }
}

int IntegerSet::hash(int val) const {
  std::hash<std::string> hasher;
  std::stringstream string;
  string << val;
  return (int) hasher(string.str());
}

void IntegerSet::resize() {
  int value;
  int* bucket;
  int bucketIdx;
  int new_buckets = numBuckets * 2;
  int** new_store = new int*[new_buckets];
  
  for (int indexRow = 0; indexRow < new_buckets; indexRow++) {
    new_store[indexRow] = new int[new_buckets];
    for (int indexCol = 0; indexCol < new_buckets; indexCol++) {
      new_store[indexRow][indexCol] = NULL;
    }
  }
  
  for (int indexRow = 0; indexRow < numBuckets; indexRow++) {
    bucket = store[indexRow];
    for (int indexCol = 0; indexCol < length(bucket); indexCol++) {
      value = bucket[indexCol];
      bucketIdx = bucketIndex(value, new_buckets);
      bucket = new_store[bucketIdx];
      bucket[length(bucket)] = value;
    }
  }
  
  delete[] store;
  store = new_store;
  numBuckets = new_buckets;
}
