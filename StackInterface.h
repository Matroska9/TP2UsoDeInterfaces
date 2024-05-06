#ifndef STACKINTERFACE_H
#define STACKINTERFACE_H

#include <StackableObject.h>

class StackInterface {
public:
    virtual ~StackInterface() {}
    virtual bool push(StackableObject* object) = 0;
    virtual StackableObject* pop() = 0;
    virtual int getCount() = 0;
    //virtual bool isEmpty() const = 0;
};


#endif // STACKINTERFACE_H
