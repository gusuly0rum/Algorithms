#include "LinkedList.hpp"

int main() {
  LinkedList list;
  list.push(1);
  list.push(2);
  list.push(3);
  list.push(4);
  list.push(5);
  list.remove(3);
  
  list.print();
  std::cout << list.count << std::endl;
  return 0;
}
