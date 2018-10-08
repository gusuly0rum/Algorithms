#include "BinarySearchTree.hpp"

/* constructor */
BinarySearchTree::BinarySearchTree(BSTNode* root) {
  this->root = root;
}

/* basic operations */

BSTNode* BinarySearchTree::insert(int value) {
  BSTNode* node = new BSTNode(value);
  if (this->root == nullptr) {
    root = node;
  } else {
    root->append(node);
  }
  return node;
}

BSTNode* BinarySearchTree::find(int value) {
  BSTNode* node = this->root;
  while (node) {
    if (node->value == value) return node;
    node = (value < node->value) ? node->left : node->rite;
  }
  return nullptr;
}

std::vector<BSTNode*> BinarySearchTree::bfs() {
  BSTNode* node;
  std::vector<BSTNode*> children;
  std::vector<BSTNode*> queue { this->root };
  std::vector<BSTNode*> order { this->root };
  
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
