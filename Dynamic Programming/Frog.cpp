#include "Frog.hpp"

Frog::Frog() {
  this->cache[1] = std::vector<std::vector<int>> { { 1 } };
  this->cache[2] = std::vector<std::vector<int>> { { 1, 1 }, { 2 } };
  this->cache[3] = std::vector<std::vector<int>> { { 1, 1, 1 }, { 1, 2 }, { 2, 1 }, { 3 } };
}

// Top Down
std::vector<std::vector<int>> Frog::topDown(int numSteps) {
  if (!cache[numSteps].empty()) return cache[numSteps];
  
  for (int add = 1; add <= 3; add++) {
    std::vector<std::vector<int>> steps = cache[numSteps - add];
    
    for (int k = 0; k < steps.size(); k++) {
      std::vector<int> step = steps[k];
      step.push_back(add);
      cache[numSteps].push_back(step);
    }
  }
  
  return cache[numSteps];
}

// Bottom Up
std::vector<std::vector<int>> Frog::bottomUp(int numSteps) {
  return cache[1];
}
