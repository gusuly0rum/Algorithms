#include "LinkedList.hpp"

/* constructor */
LinkedList::LinkedList() {
  count = 0;
  head = new Node;
  tail = new Node;
  head -> next = tail;
  tail -> prev = head;
}

LinkedList::~LinkedList() {
  while (!isEmpty()) {
    last() -> destroy();
  }
}

/* public */

// O(1)
Node* LinkedList::first() const {
  return head -> next;
}

// O(1)
Node* LinkedList::last() const {
  return tail -> prev;
}

// O(1)
void LinkedList::push(int value) {
  Node* node = new Node(value);
  node -> next = tail;
  node -> prev = last();
  last() -> next = node;
  tail -> prev = node;
  count++;
}

// O(n)
void LinkedList::remove(int value) {
  Node* node = find(value);
  node -> destroy();
  count--;
}

// O(n)
Node* LinkedList::find(int value) const {
  Node* node = first();
  while (node != tail) {
    if (node -> value == value) {
      return node;
    }
    node = node -> next;
  }
  return nullptr;
}

// O(n)
bool LinkedList::includes(int value) const {
  Node* node = first();
  while (node != tail) {
    if (node -> value == value) {
      return true;
    }
    node = node -> next;
  }
  return false;
}

bool LinkedList::isEmpty() const {
  return first() == tail;
}

// debugger
void LinkedList::print() const {
  int iter = 1;
  Node* node = first();
  std::cout << "{ ";
  while (node != tail) {
    if (iter < count) std::cout << node -> value << ", ";
    if (iter == count) std::cout << node -> value;
    iter++;
    node = node -> next;
  }
  std::cout << " }" << std::endl;
}
