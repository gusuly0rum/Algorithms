#include "Node.hpp"
#include "LinkedList.hpp"

/* constructor */
LinkedList::LinkedList(Node head, Node tail) {
  count = 0;
  head = head;
  tail = tail;
}

/* public */
Node* LinkedList::first() {
  return head -> next;
}

Node* LinkedList::last() {
  return head -> prev;
}

int LinkedList::length() {
  return count;
}

bool LinkedList::isEmpty() {
  return first() == tail;
}

/* private */
