#include <vector>
#include <iostream>
#include "../Graphs/Node.hpp"

std::vector<Node*> tarjan(std::vector<Node*>& nodes);
bool visit(Node* node);

void vprint(std::vector<Node*>& array);
