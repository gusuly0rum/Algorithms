#include "LinkedList.hpp"

class HashMap {
  // member variables
  int count;
  int numBuckets;
  LinkedList* store;
  
public:
  // constructor
  HashMap();
  
  // accessors
  int& operator[](int key);
  
  // basic operations
  void remove(int key);
  bool includes(int key) const;
  
  // debugger
  void print() const;
  
private:
  // private members
  void resize();
  void insert(int value);
  int hash(int value) const;
  int bucketIndex(int key, int nBuckets) const;
};
