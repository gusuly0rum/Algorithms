#include <string>
#include <vector>
#include <sstream>
#include <iostream>

class IntegerSet {
  // member variables
public:
  int count;
private:
  struct bucketLength;
  int numBuckets;
  int** store;
  
public:
  // constructor
  IntegerSet();
  
  // basic operations
  void insert(int val);
  void remove(int val);
  bool includes(int val) const;
  
  // debugger
  void print() const;
  
private:
  // internal member functions
  void fill();
  void resize();
  int hash(int val) const;
  int length(int bucket[]) const;
  int bucketIndex(int val, int nBuckets) const;
};
