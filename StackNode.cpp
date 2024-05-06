#include "StackNode.h"

StackNode::StackNode(StackableObject* object, StackNode* prevNode)
    : object(object), prevNode(prevNode) {}

StackNode::~StackNode() {
    delete object;
}

StackableObject* StackNode::getObject() const {
    return object;
}

StackNode* StackNode::getPrevNode() const {
    return prevNode;
}

void StackNode::setPrevNode(StackNode* prevNode) {
    this->prevNode = prevNode;
}
