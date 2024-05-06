#ifndef STACKABLEOBJECT_H
#define STACKABLEOBJECT_H

class StackableObject {
public:
    virtual ~StackableObject() {}
    virtual void mostrar() const = 0;
};

#endif // STACKABLEOBJECT_H
