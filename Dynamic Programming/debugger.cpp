#include "debugger.hpp"

void print(int value) {
  std::cout << value << std::endl;
}

void sprint(const char* string) {
  std::cout << string << std::endl;
}

void vprint(std::vector<int> array) {
  std::cout << "{ ";
  for (int k = 0; k < array.size(); k++) {
    std::cout << array[k];
    if (k < array.size() - 1) std::cout << ", ";
  }
  std::cout << " }";
}

void vvprint(std::vector<std::vector<int>> array) {
  std::cout << "{ ";
  for (int k = 0; k < array.size(); k++) {
    vprint(array[k]);
    if (k < array.size() - 1) std::cout << ", ";
  }
  std::cout << " }" << std::endl;
}
