#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include "Bucket.hpp"

/* constructor */
Bucket::Bucket() {
  std::vector<int> store;
}

void Bucket::push(int value) {
  store.push_back(value);
}

void Bucket::remove(int value) {
  int index;
  for (index = 0; index < store.size(); index++) {
    if (store[index] == value) break;
  }
  store.erase(store.begin() + index);
}

bool Bucket::includes(int value) const {
  for (int index = 0; index < store.size(); index++) {
    if (store[index] == value) return true;
  }
  return false;
}
