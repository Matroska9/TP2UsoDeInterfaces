#ifndef STACKUSER_H
#define STACKUSER_H

#include <StackInterface.h>

class StackUser
{
    public:
        StackUser(StackInterface *stack);
        virtual ~StackUser();

        void cargarVehiculo();
        void cargarDepartamento();
        void imprimirPila();

    private:
        StackInterface *stack;
};

#endif // STACKUSER_H
