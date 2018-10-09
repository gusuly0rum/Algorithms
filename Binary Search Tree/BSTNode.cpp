#include "BSTNode.hpp"

/* constructor */
BSTNode::BSTNode(int value) {
  this->value = value;
  this->left = nullptr;
  this->rite = nullptr;
}

/* basic operations */
bool BSTNode::unbound() const {
  return (left == nullptr) && (rite == nullptr);
}

void BSTNode::append(BSTNode* node) {
  if (node->value <= value) {
    if (left) left->append(node);
    if (left == nullptr) left = node;
    
  } else {
    if (rite) rite->append(node);
    if (rite == nullptr) rite = node;
  }
}

std::vector<BSTNode*> BSTNode::children() {
  std::vector<BSTNode*> children;
  if (left) children.push_back(left);
  if (rite) children.push_back(rite);
  return children;
}

/* traversal */
std::vector<BSTNode*> BSTNode::bfs() {
  BSTNode* node;
  std::vector<BSTNode*> children;
  std::vector<BSTNode*> queue { this };
  std::vector<BSTNode*> order { this };

  while (!queue.empty()) {
    node = queue[0];
    queue.erase(queue.begin());
    children = node->children();

    for (int index = 0; index < children.size(); index++) {
      queue.push_back(children[index]);
      order.push_back(children[index]);
    }
  }

  return order;
}

std::vector<BSTNode*> BSTNode::dfs(std::vector<BSTNode*>& order) {
}

/* debugger */
void BSTNode::print() {
  std::vector<BSTNode*> order = bfs();

  std::cout << "{ ";
  for (int index = 0; index < order.size(); index++) {
    std::cout << order[index]->value;
    if (index < order.size() - 1) std::cout << ", ";
  }
  std::cout << " }" << std::endl;
}
