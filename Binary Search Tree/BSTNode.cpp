#include "BSTNode.hpp"

/* constructor */
BSTNode::BSTNode(int value) {
  this->value = value;
  this->left = nullptr;
  this->rite = nullptr;
}

/* basic operations */
bool BSTNode::unbound() {
  return !(this->left && this->rite);
}

void BSTNode::append(BSTNode* node) {
  if (this->unbound()) {
    if (node->value <= this->value) {
      this->left = node;
    } else {
      this->rite = node;
    }
    
  } else {
    if (node->value <= this->value) {
      this->left->append(node);
    } else {
      this->rite->append(node);
    }
  }
}

/* traversal */
//std::vector<BSTNode*> BSTNode::bfs() {
//  BSTNode* node;
//  std::vector<BSTNode*> children;
//  std::vector<BSTNode*> queue { this };
//  std::vector<BSTNode*> order { this };
//  
//  while (!queue.empty()) {
//    node = queue[0];
//    queue.erase(queue.begin());
//    children = node->children();
//    
//    for (int index = 0; index < children.size(); index++) {
//      queue.push_back(children[index]);
//      order.push_back(children[index]);
//    }
//  }
//  
//  return order;
//}
//
//
///* debugger */
//void BSTNode::print() {
//  std::vector<BSTNode*> order = bfs();
//  
//  std::cout << "{ ";
//  for (int index = 0; index < order.size(); index++) {
//    std::cout << order[index]->value;
//    if (index < order.size() - 1) std::cout << ", ";
//  }
//  std::cout << " }" << std::endl;
//}
