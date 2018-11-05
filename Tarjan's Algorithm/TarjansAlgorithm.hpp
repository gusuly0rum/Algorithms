#include <vector>
#include <iostream>
#include <unordered_set>
#include "../Graphs/Node.hpp"

std::vector<Node*> tarjan(std::vector<Node*>& nodes);

bool visit(Node* node,
           std::unordered_set<Node*> visited,
           std::vector<Node*> result
           );

void vprint(std::vector<Node*>& array);
