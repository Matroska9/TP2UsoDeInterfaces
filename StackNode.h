#ifndef STACKNODE_H
#define STACKNODE_H

#include "StackableObject.h"

class StackNode {
public:
    StackNode(StackableObject* object, StackNode* prevNode = nullptr);
    ~StackNode();

    StackableObject* getObject() const;
    StackNode* getPrevNode() const;
    void setPrevNode(StackNode* prevNode);

private:
    StackableObject* object;
    StackNode* prevNode;
};

#endif // STACKNODE_H
